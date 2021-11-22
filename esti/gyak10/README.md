# 10. gyakorlat


## Kötelező feladatok

1. Írj egy makrót, ami eldönti, hogy két szám közül melyik a nagyobb!
1. Írj programot két vektor skaláris szorzatának kiszámítására!
1. Írj egy függvényt, amely egy vektor elemeit összegzi! A "nulla" legyen a függvény paramétere (amivel kezded az összegzést), ahogyan egy olyan függvény mutatója is, amely két számot összead! Használd ugyanezt a függvényt szumma helyett produktum számítására!

## Gyakorló feladatok

1. Írj egy makrót egy `[n,m)` intervallumon való iterációra. Pl. `FOR(i, 0, 10)`-t lehessen írni `for(i = 0; i < 10; ++i)` helyett. Használható-e ez a makró általánosságban is minden for ciklus kiváltására?
1. Írj függvényt egy mátrix transzponáltjának kiszámítására!
1. Írj programot, amely kiszámítja egy szám négyzetét. A négyzet számítását másik C file-ban definiáld, és egy header file-ban deklaráld! A header file-ba írj include guardot!
1. Írd át az előző programot úgy, hogy paraméterátadás helyett globális változót használsz!
1. Írj programot két mátrix szorzatának kiszámítására! - példamegoldás: [3-matrix-a.c](3-matrix-a.c) + [3-matrix-b.c](3-matrix-b.c) + [3-matrix.h](3-matrix.h)


## Emlékeztetőként nézzétek meg az alábbi makrókra, fordítási egységekre példaprogramok:
1. egyszerűbb makrók: [1-circle.c](1-circle.c)
1. több fordítási egység: [2-circle-a.c](2-circle-a.c) + [2-circle-b.c](2-circle-b.c) + [2-circle.h](2-circle.h)

## Haladó feladatok
1. Egy buffer méretét egy `#define`-nal megadott szimbolikus érték határozza meg. Írj programot, amely egy ilyen bufferbe biztonságosan (vagyis a `buffer`-t nem túlírva) beolvas a `scanf()` függvény segítségével egy karakterláncot!
1. Írj egy általános függvényt, amely összegzésre, megszámlálásra, valamint minimum/maximumkeresére is használható! Függvénymutatón keresztül vedd át at a függvényt, amely visszaadja az új összeget/darabszámot/minimumot/maximumot!

## Házi feladat
1. Írj programot, amely két kétdimenziós körről eldönti, hogy diszjunktak-e, érintik-e egymást, metszik-e egymást vagy tartalmazzák-e egymást! A függvényed kapja meg paraméterül a két középpont koordinátáit valamint a körök sugarait!
