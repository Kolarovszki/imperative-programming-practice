# 9. gyakorlat

## Emlékeztető

#### `static` kulcsszó

Egy `static` változó tovább él, mint a függvény amiben deklarálva lett, tehát függvényhívások között megőrzi az értékét!

Akkor hasznos, ha szeretnéd hogy a függvényhívás megőrizzen valamilyen állapotot, de erre nem akarsz globális változót használni.

*Miért nem akarnál globális változót használni?* Ugyanis a globális változónak nagyobb a láthatósága, a `static` változó csak az adott függvényen belül (ahol deklarálva lett) érhető el. Ez akkor hasznos, ha nem szeretnéd, hogy pl. véletlenül valami más függvény is módosítsa a változódat.

*Megjegyzés*: A `static` kulcsszónak úgy van értelme, ha a változó deklarációja és definíciója egy utasítás alatt van. Tehát a
```
static int my_static_var;
my_static_var = 0;
```
kód mindig újraírja a `my_static_var` értékét `0`-ra. A helyes kód:
```
static int my_static_var = 0;
```

#### Láthatóság

- A harcsabajszon (scope-on) belül deklarált változó nem látszik kívül.
- Ha van ugyanolyan nevű változó feljebbi scope-ban mint ami a saját scope-ban van deklarálva, akkor a saját scope-ban deklarált változó van érvényben. Általánosságban, mindig az alacsonyabb scope-jú változó van érvényben névütközés esetén.

*Megjegyzés: Kerüld a névütközést ha lehet!*

**Példa**

```
#include <stdio.h>

char my_char = 'a';

void print_my_char() {
    printf("print_my_char fuggvenyben: %c\n", my_char);
}

int main() {
    char my_char = 'b';

    {
        char my_char = 'c';
        printf("Harcsabajszon belul: %c\n", my_char);
    }
    printf("main fuggvenyben: %c\n", my_char);
    return 0;
}
```
Output:
```
Harcsabajszon belul: c
main fuggvenyben: b
print_my_char fuggvenyben: a
```

#### Modularizálás

**main.c**

```
#include "utils.h"

int main() {
    print_hello();
    return 0;
}
```

**utils.c**

```
#include "utils.h"

void print_hello() {
    printf("Hello, World!\n");
}
```

**utils.h**

```
#ifndef UTILS_H  // Megjegyzés: ezt még nem vettük legutóbb, majd erről is lesz szó.
#define UTILS_H

void print_hello();

#endif  // UTILS_H
```

*Megjegyzéshez*: Nem volt róla szó múlt héten, de a fentebbi preprocesszor utasítások (`#ifndef`, `#define`, `#endif`) kellenek, hogy ne történjen újra-deklaráció. Ezt úgy hívják, hogy *include guard*. 

**Fordítás egyben**:
```
gcc -W -Wall -Wextra -Wpedantic main.c utils.c
```

**Fordítás külön**:
```
gcc -W -Wall -Wextra -Wpedantic -c main.c  // Eredmény: main.o
gcc -W -Wall -Wextra -Wpedantic -c utils.c  // Eredmény: utils.o

gcc main.o utils.o  // Összeszerkesztés (linkelés)
```

**Miért lehet hasznos külön fordítani?**

Spórolás. Ne kelljen minden egyes alkalommal újrafordítani a `utils.c`-t, ha nem változik. Nagy kódbázisnál számíthat!

**Miért kell a header file?**

Ugyanis ha csak a `main.c`-t fordítod és később linkeled össze a generált `.o` fájlokat, attól még kell tudnia a fordítónak a pl. hogy milyen függvények vannak ill. a függvények szignatúráját.

## Dinamikus memóriakezelés

### Rövid elmélet

#### Mi a baj a statikus tömbökkel?

- Program írásakor nem tudjuk előre, mennyi memóriára lesz szüksége a felhasználónak;
- Változók élettartama nehezen kontrollálható;
- Nagy tömbök nem férnek el a veremben.

#### Milyen konstrukcióval lehetne ezt megoldani?

- Futásidőben dönthetjük el, hogy mennyi memóriát foglalunk.
- Eldönthetjük, hogy mikor szabadítjuk fel a lefoglalt memóriaterületet.

**Mindennek az ára:** nekünk kell lefoglalni és felszabadítani a memóriaterületet is!

**Ha nem szabadítjuk fel a memóriát, akkor a programunk által használt memória egyre növekszik, amíg el nem fogy a számítógép memóriája!**


#### `malloc()` és `free()`

- `malloc()` -> *lefoglal* memóriaterületet;
- `free()` -> *felszabadít* memóriaterületet.

```
void *malloc(size_t size);
```

A `malloc()` visszaad egy pointert ami a lefoglalt memóriaterületre mutat, és a megadott mennyiségű memória van alatta lefoglalva (byte-ban).

Ha nem sikerül (mondjuk mert nincs elég memória), akkor `NULL` pointert ad vissza. Ezért minden esetben le kell ellenőriznünk, hogy sikerült-e a memória lefoglalása.

Mint eddig, a **pointer nem tud arról, hogy mekkora lefoglalt memória-területre mutat**.

```
void free(void *pointer);
```

A `free()` paraméterül várja a felszabadítandó pointert. *Nem kell átadni a lefoglalt memória méretét!*

#### Hol van a dinamikus lefoglalt memóriaterület?

Ha a veremben (stacken) tárolódnának, akkor a függvényhívás végeztével automatikus kitörlődne a veremből.

A dinamikusan lefoglalt memória a kupacon (heapen) tárolódik el. Ez nincs automatikusan kezelve mint a verem, ezért kell nekünk mindig "kézzel" felszabadítani a memóriaterületet.

### Példakódok

- [0-heap.c](0-heap.c)
- [3-realloc.c](3-realloc.c)
- [what-0.c](what-0.c)
- [what-1.c](what-1.c)
- [what-2.c](what-2.c)
- [what-3.c](what-3.c)

### Kötelező feladatok

1. Írj egy programot, ami bekér a felhasználótól egy legfeljebb 20 karakter hosszú szöveget, és készít belőle egy másolatot. Ügyelj arra, hogy a másolat csak akkora memóriaterületet használjon, ami feltétlenül szükséges. (`strlen` + `malloc`)
2. Készíts egy `reverse()` nevű függvényt, ami megfordítja a paraméterül kapott stringet. A megfordított stringet egy új memóriaterületen add vissza. Dinamikusan foglald a szükséges memóriát, és ügyelj a memória felszabadítására!
3. Írj programot, ami 5 szót olvas be a felhasználótól, és kiírja fordított sorrendben őket. Használj tömböt.
4. Írj egy programot, ami parancssori argumentumként vár egy számot, és annyi szót olvas be a felhasználótól, amennyit megadott. Ha mindet megadta, írja ki fordított sorrendben a szavakat. Használj tömböt.
5. Módosítsd az előző feladat megoldását úgy, hogy ha a felhasználó az "END" szót írja be, akkor a beolvasás véget ér, mielőtt elérné a parancssori argumentumként megadott limitet. Használj tömböt. Majd írd ki a tömb tartalmát fordított sorrendben. (Használd a `realloc`-ot!)

### Gyakorló feladatok

1. Készíts egy függvényt, ami egészek tömbjét várja paraméterül. A függvény térjen vissza egy másik tömbbel, amiben a paraméter tömb elemei szortírozva találhatók: elöl a párosak, hátul a páratlanok. Dinamikusan kezeld a memóriát

### Haladó feladatok

1. Adott egy fájl, aminek minden sorában számok vannak szóközökkel elválasztva. Írj egy programot, mely soronként olvas ebből a fájlból, és minden sort növekvő számorrendben kiír egy output.txt nevű fájlba. Dinamikusan kezeld a memóriát

### Házi feladat

1. Módosítsd az 5. kötelező feladat megoldását úgy, hogy a program már nem kér be a felhasználótól parancssori argumentumot, hanem addig olvasunk be szavakat a felhasználótól, amíg nem EOF (fájl vége karakter, terminálon windows esetében a Ctrl+Z, unix rendszeren Ctrl+D) a bemenet. Majd kiírja őket fordított sorrendben. Ha végzett a kiírással, újból várjon szavakat. Használj tömböt. Ügyelj arra, hogy ne keletkezzen memóriaszemét.
