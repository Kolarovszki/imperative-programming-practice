# 10. gyakorlat

[10. gyakorlat elméleti összefoglalója](../../elmelet/gyak10)

## Makrókra, fordítási egységekre példaprogramok:

1. egyszerűbb makrók: [1-circle.c](1-circle.c)
2. több fordítási egység: [2-circle-a.c](2-circle-a.c) + [2-circle-b.c](2-circle-b.c) + [2-circle.h](2-circle.h)

## Kötelező feladatok

1. Ha a 9. gyakorlaton nem volt szó `realloc`-ról: írj programot, amely addig olvas be számokat, amíg azok pozitívak, majd visszafelé sorrendben kiírja az összeset! (Használj dinamikus memóriakezelést realloc-kal)
2. Írj egy makrót, ami eldönti, hogy két szám közül melyik a nagyobb!
3. Írj egy makrót, ami kiírja paraméterét! (A paraméter nem feltétlenül string!)
4. Írj programot, amely kiszámítja egy szám négyzetét. A négyzet számítását másik C file-ban definiáld, és egy header file-ban deklaráld! A header file-ba írj include guardot!
5. Írd át az előző programot úgy, hogy paraméterátadás helyett globális változót használsz!
6. Írj programot két vektor skaláris szorzatának kiszámítására!
7. Írj programot két mátrix szorzatának kiszámítására! - példamegoldás: [3-matrix-a.c](3-matrix-a.c) + [3-matrix-b.c](3-matrix-b.c) + [3-matrix.h](3-matrix.h)
8. Írj egy függvényt, amely egy vektor elemeit összegzi! A "nulla" legyen a függvény paramétere (amivel kezded az összegzést), ahogyan egy olyan függvény mutatója is, amely két számot összead! Használd ugyanezt a függvényt szumma helyett produktum számítására!

## Gyakorló feladatok

1. Írj egy makrót egy `[n,m)` intervallumon való iterációra. Pl. `FOR(i, 0, 10)`-t lehessen írni `for(i = 0; i < 10; ++i)` helyett. Használható-e ez a makró általánosságban is minden for ciklus kiváltására?
2. Írj függvényt egy mátrix transzponáltjának kiszámítására!

## Haladó feladatok

1. Egy buffer méretét egy `#define`-nal megadott szimbolikus érték határozza meg. Írj programot, amely egy ilyen bufferbe biztonságosan (vagyis a `buffer`-t nem túlírva) beolvas a `scanf()` függvény segítségével egy karakterláncot!
2. Írj egy általános függvényt, amely összegzésre, megszámlálásra, valamint minimum/maximumkeresére is használható! Függvénymutatón keresztül vedd át at a függvényt, amely visszaadja az új összeget/darabszámot/minimumot/maximumot!
