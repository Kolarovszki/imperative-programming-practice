# 10. gyakorlat elméleti összefoglalója


## `struct`

```c
#include <stdio.h>

struct Person {
    int id;
    char name[128];
    char email[128];
};

int main() {
    struct Person lajos = {1, "Lajos", "lajos@lajosmail.hu"};

    printf("Hello, %s!\n", lajos.name);

    return 0;
}
```

**Vigyázat**:

A kód
```c
struct Person lajos;
lajos.name = "Lajos";
```
nem fog működni sajnos, C-ben nem tudunk csak így értékül adni stringeket. A helyes
megoldás:
```c
struct Person lajos;
strcpy(lajos.name, "Lajos");
```


## `typedef`

A fenti példában tudunk okosabbak lenni annyival, hogy létrehozonk a `Person` structnak
egy típust `typedef` segítségével:

```c
#include <stdio.h>

typedef struct Person {
    int id;
    char name[128];
    char email[128];
} PersonType;

int main() {
    PersonType lajos = {1, "Lajos", "lajos@lajosmail.hu"};

    printf("Hello, %s!\n", lajos.name);

    return 0;
}
```

A `typedef` semmi extra, gyakorlatilag egy típusnak lehet vele új nevet adni, pl. tudunk
csinálni egy `byte` típust a következőképp:
```
typedef unsigned char byte;
```

## Felsorolás azaz `enum`

Enumok létrehozása:

```c
enum Language {C, Cpp, Python, Haskell};
```

```c
#include <stdio.h>

enum Language {C, Cpp, Python, Haskell};

typedef struct Person {
    int id;
    char name[128];
    char email[128];
    Language preferred_language;
} PersonType;

int main() {
    PersonType lajos = {1, "Lajos", "lajos@lajosmail.hu", Python};

    printf("Hello, %s!\n", lajos.name);
    printf("Preferred language: %d\n", lajos.preferred_language);

    return 0;
}
```
és itt a `.` operátorral lehet elérni az adattagokat.

Ez a konstrukció arra kell, hogy olvasható legyen a kód. Lehetne megegyezni arról, hogy
a nyelveket intekkel reprezentáljuk, a következőképpen:

- C: 0
- Cpp: 1
- Python: 2
- Haskell: 3

és a kódban akkor ezt írnánk hogy
```c
PersonType lajos = {1, "Lajos", "lajos@lajosmail.hu", 2};
```

ami nem túl olvasható. De igazából pontosan ugyanez történik a motorháztető alatt, a
felsorolási típus igazából intek sorozata.

**Megjegyzés 1**:

Itt is lehet használni `typedef`-et:
```c
typedef enum Language {C, Cpp, Python, Haskell} LanguageType;
```

**Megjegyzés 2**:

Bármilyen integert megadhatsz az `enum` tagoknak:
```c
enum Language {C = 1, Cpp = 42, Python = 3, Haskell = -1};
```
viszont nem érdemes erre támaszkodni algoritmusban, mert az összezavaró lehet.


## `union`

Spórolós `struct`, arra az esetre, ha nem használod ki az összes adattagot egyszerre:
egy memóriaterületen tároljuk az összes adattagot!

```c
#include <stdio.h>

typedef union IntOrDouble {
    int i;
    double d;
} IntOrDoubleType;

int main() {
    IntOrDoubleType int_or_double;

    int_or_double.i = 3;

    int_or_double.d = 4.0;

    printf("int_or_double.i=%d, but expected 3!\n", int_or_double.i);

    return 0;
}
```

A fenti példában a `4.0` felülírja a `3`-at a memóriában.

## Példányosok dinamikus memóriakezeléssel

Térjünk vissza Lajosra! Így tudunk dinamikusan lefoglalni területet egy `struct`-nak:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    int id;
    char name[128];
    char email[128];
} PersonType;

void constructPerson(
    PersonType *person,
    int id, char name[], char email[]
) {
    person->id = id;
    strcpy(person->name, name);
    strcpy(person->email, email);
}

int main() {
    PersonType* lajos = malloc(sizeof(PersonType));

    constructPerson(lajos, 1, "Lajos", "lajos@lajosmail.hu");

    printf("Hello, %s!\n", lajos->name);

    free(lajos);

    return 0;
}
```

Mi ez a `->`, eddig még ilyen nem volt. Ez csak egy rövidítés:
```c
*(person).id == person->id
```
Tehát a `->` operátor egyszerre két dolgot csinál:
1. dereferálja a pointert
2. adattag-elérést
