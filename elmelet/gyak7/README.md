# 8. gyakorlat elméleti összefoglalója

## `static` kulcsszó

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

## Láthatóság

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

## Modularizálás

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
#ifndef UTILS_H  // Include guard
#define UTILS_H

void print_hello();

#endif  // UTILS_H
```

*Fontos*: A fentebbi preprocesszor utasítások (`#ifndef`, `#define`, `#endif`) kellenek,
hogy ne történjen újra-deklaráció. Ezt a trükköt úgy hívják, hogy *include guard*.

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
