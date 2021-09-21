# 3. gyakorlat

## Kötelező feladatok

- Trükkösebb `for` példák (vajon mit csinál & közös kódmegértés):
  - 0-inc-dec.c
  - for-1.c
  - for-2.c
  - for-3.c
  - for-4.c
  - for-5.c
  - for-6.c
- Kitalálós játék (guessing): Mindaddig olvass be számot, míg az nem egyezik az általad választottal (először lehet beégetett konstans vagy `#define`, aztán nézd meg/használd a `rand()` függvényt). Hibás tipp esetén segíts, hogy túl kicsi vagy túl nagy volt-e a tipp. [többféle ciklussal is próbálj megoldást adni, illetve próbáld ki hogyan helyettesíthetőek az `if` utasítások `?:`-al]
- Egészítsd ki a guessing programot a hibás próbálkozások számlálásával, majd ennek értéke alapján adj szöveges értékelést!
- Szervezd úgy a guessing program kódját, hogy a `main()` függvényen kívül még három másik függvény szerepeljen (pl.: `get_target`, `guessing`, `evaluate`). Legyen minden függvénynek elődeklarációja is.
- Írj két függvényt, melyek egymást felváltva futnak. Az egyik, nevezzük a-nak, 2-vel osztja a paraméterként kapott értéket majd meghívja a b függvényt az eredménnyel, ha az nagyobb mint 0. A b függvény kivon 1-et a kapott értékből majd meghívja a-t a csökkentett értékkel, ha az még nagyobb, mint 0. A kiinduló számot a felhasználótól kérd be, és számold, hány a-b iteráció történik, míg eléri a 0-át.
- Próbáljuk ki az operator chaining-et `(a<b<c)`!

## Verseny/házi feladat
- Hányféleképpen tudod a 42-t kiíratni a képernyőre? Csak signed, egész típusokat, literálokat használj. Egyetlen, char típusú változót használhatsz. Az értékadás kivételével más operátor nem használható (tehát nem használható összeadás, szorzás, ...). (néhány tipp: oktális, hexa literálok, típuskonverziók, túlcsordulás) - Több mint 20 féle megoldás képzelhető el!


## Gyakorló feladatok
- Próbáld úgy “obfuszkálni” a korábbi guessing megoldásod, hogy minél több különböző számliterált használj (eltérő számrendszer, int-től eltérő típus + típuskonverziók, #define használata) - a program értelmén, működésén semmit ne változtass!

- Olvassunk be `0-9,a,b,c,d,e,f` karaktereket (minden másra adjunk hibát). A beolvasott sorozatot értelmezzünk egy hexadecimális számként, majd konvertáljuk át 10-es számrendszerbe. Használd ki a karakter-szám “átjárhatóságot”.
- Írj programot, mely a standard inputról bekért számról eldönti, hogy szökőév-e. Szökőév minden néggyel osztható év, kivéve, ami százzal is osztható. Viszont a négyszázzal oszthatók szintén szökőévek lesznek. (a megoldásban NE használj `if`-et!)
- Írd ki, hogy hány bájton ábrázol a géped egy `int`, `unsigned`, `long`, `short`, `float`, `double`, `long double` értéket! (Használd a `sizeof` függvényt!)
- Deklarálj egy `int` típusú változót. Számold ki, hogy mekkora lehet a legnagyobb érték, amit el lehet ebben tárolni. Add értékül a változónak ezt a számot, majd egy következő utasításban adj hozzá egyet. Írd ki a megnövelt értéket.
- Deklarálj egy unsigned int típusú változót, és csináld végig ezzel is az előző feladat lépéseit.


## Haladó feladatok
- Rajzold ki a Pascal háromszög első n sorát (n-et kérd be)!
- Olvass utána, hogy a C milyen bitműveleteket támogat (illetve ezeknek milyen gyakorlati haszna lehet): `https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/`



