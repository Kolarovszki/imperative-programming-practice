# 9. óra

## Dinamikus memóriakezelés

### Példakódok

- [0-heap.c](0-heap.c)
- 3-realloc.c
- what-0.c
- what-1.c
- what-2.c
- what-3.c

### Kötelező feladatok

1. Írj egy programot, ami bekér a felhasználótól egy legfeljebb 20 karakter hosszú szöveget, és készít belőle egy másolatot. Ügyelj arra, hogy a másolat csak akkora memóriaterületet használjon, ami feltétlenül szükséges. (`strlen` + `malloc`)
1. Készíts egy `reverse()` nevű függvényt, aminek egy string (karaktertömb) paramétere van. A függvény fordítsa meg a string karaktereit helyben. Azaz a függvény az eredményt ugyanazon a memóriaterületen adja vissza, amit paraméterként kapott. Például "alma" stringből "amla" lesz az eredmény.
1. Módosítsd az előző `reverse()` nevű függvényt úgy, hogy ne helyben cserélje a karaktereket, hanem egy másik stringet hozzon létre, és azzal térjen vissza. Dinamikusan foglald a szükséges memóriát
1. Írj programot, ami 5 szót olvas be a felhasználótól, és kiírja fordított sorrendben őket. Használj tömböt.
1. Írj egy programot, ami parancssori argumentumként vár egy számot, és annyi szót olvas be a felhasználótól, amennyit megadott. Ha mindet megadta, írja ki fordított sorrendben a szavakat. Használj tömböt.
1. Módosítsd az előző feladat megoldását úgy, hogy ha a felhasználó az "END" szót írja be, akkor a beolvasás véget ér, mielőtt elérné a parancssori argumentumként megadott limitet. Használj tömböt. Majd írd ki a tömb tartalmát fordított sorrendben.
1. Módosítsd az előző feladat megoldását úgy, hogy a program már nem kér be a felhasználótól parancssori argumentumot, hanem addig olvasunk be szavakat a felhasználótól, amíg nem EOF (fájl vége karakter, terminálon windows esetében a Ctrl+z, unix rendszeren Ctrl+d) a bemenet. Majd kiírja őket fordított sorrendben. Ha végzett a kiírással, újból várjon szavakat. Használj tömböt. Ügyelj arra, hogy ne keletkezzen memóriaszemét.

### Gyakorló feladatok

1. Készíts egy függvényt, ami egészek tömbjét várja paraméterül. A függvény térjen vissza egy másik tömbbel, amiben a paraméter tömb elemei szortírozva találhatók: elöl a párosak, hátul a páratlanok. Dinamikusan kezeld a memóriát

### Haladó feladatok

1. Adott egy fájl, aminek minden sorában számok vannak szóközökkel elválasztva. Írj egy programot, mely soronként olvas ebből a fájlból, és minden sort növekvő számorrendben kiír egy output.txt nevű fájlba. Dinamikusan kezeld a memóriát
