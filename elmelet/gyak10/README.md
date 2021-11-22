# 10. gyakorlat elméleti összefoglalója

## Preprocesszor direktívák

Ilyenek a `#define`, `#include`, `#if-#endif` stb. A preprocesszor az a része a fordítónak,
mely az "igazi" fordítás előtt felolvassa ezeket a direktívákat, és ennek megfelelően
módosítja a forráskódot.

A preprocesszor kimenetét a `-E` kapcsolóval tudjátok megnézni:
```
gcc -E <fájlnév>
```

A preprocesszor szöveges módosításokat hajt végre, tehát pl.:
- `#define <NÉV> <KIFEJEZÉS>`: Behelyettesíti a forráskódban talált `<NÉV>` helyére a
megadott kifejezést. Ezt makró-definíciónak is szoktuk hívni.
- `#include <HEADER_FÁJL>`: belehelyezi a megadott fájl tartalmát a forráskódba.
- `#if <FELTÉTEL> - #endif`: Ha igaz a feltétel, belerakja a preprocesszált szövegbe az
`#endif`-ig a forráskódot. *VIGYÁZAT*: ide nem szabad C-s változókat írni,
preprocesszálás során ezek a változók nem tudnak kiértékelődni.

Igazából nem feltétlenül szükséges ez, de nagyon megkönnyíti az életünket. Például ha
nem lenne `#include`, akkor minden függvény deklarációját le kell írnunk a `.c`
forráskódfájlok elejére. (Emlékezzünk: a `.h` header fájlokban a függvények
deklarációját tároljuk, amik a fordításhoz kellenek)

## `#define`

A `#define` preprocesszor direktívának van egy másik szintakszisa is:

```c
#define <NÉV>(<arg1>, ..., <argN>) <KIFEJEZÉS>
```

Példa:
```c
#define MAX(a, b) (a > b ? a : b)
```

**Megjegyzés**: A kifejezés körüli zárójel nem szükséges de hasznos tud lenni ha egy
másik kifejezésben használjuk egy nagyobb precedenciájú operátorral.

Például a kód

```c
#include <stdio.h>

#define ADD(a, b) a+b

int main() {
    printf("Output: %d\n", 2 * ADD(3, 4));
    return 0;
}
```
a következő kimenetet produkálja:
```
Output: 10
```

Ugyanis ha a `-E` kapcsolóval, csak a preprocesszor kimenetét nézzük, a következőt
kapjuk:

```c
...

int main() {
    printf("%d\n", 2 * 3 +4);
    return 0;
}
```

## `#`

Mit csinálhat ebben a programban az `as_string` makró?

```c
#define as_string(s) #s
bash
...

printf("Output: %s\n", as_string(Hello vilag!))
```

```
Output: Hello vilag!
```

Megoldás: az `as_string` makró (pontosabban a definíciójában a `#` szimbólum) idézőjelek
közé rakja a paraméterét. Ennyi. (Ez mondjuk jó lehet akkor, ha a változó nevét
szeretnéd kiírni.)


## Include guard

Láttuk már a [7. gyakorlat elméleti összefoglalójában](../gyak7), hogy a következő módon
írtuk meg a header fájlt:

```
#ifndef UTILS_H  // Include guard
#define UTILS_H

void print_hello();

#endif  // UTILS_H
```

Ez azért szükséges, hogy a fájlban deklarált változók ne legyenek mégegyszer deklarálva.

*Megjegyzés*: függvények újradeklarálása igazából nem nagy probléma, de lesz majd olyan
hogy definíciókat is rakunk a header fájlokba, és az újradefiníció már hibát okoz
fordítás során.

## Függvény mint függvényparaméter

Tudunk átadni függvényeket C-ben, mint paraméter! A következő kódon érdemes
megemészteni:

```c
#include <stdio.h>
#include <stdlib.h>  // ez az `exit` függvény miatt kell!


void apply_printer(int szam, void printer(int)) {
    printer(szam);
}


void my_stdio_printer(int szam) {
    printf("A szamod: %d\n", szam);
}


void my_file_printer(int szam) {
    FILE *fp = fopen("szamok.txt", "w");
    if (fp == NULL) {
        perror("Fajl nem nyithato meg!");
        exit(1);
    }
    fprintf(fp, "A szamod: %d\n", szam);
    fclose(fp);
}


int main() {
    apply_printer(4, my_stdio_printer);
    apply_printer(5, my_file_printer);
    return 0;
}
```
(Persze az egészet meg lehetne egyszerűbben is oldani, a példa pedagógiai okokból lett
direkt elbonyolítva.)

Itt az `apply_printer` függvény egy másik függvényt vár paraméterül (`printer`), amit
végrehajt úgy, hogy a kapott `printer` függvénynek átadja a `szam` paraméterét.
