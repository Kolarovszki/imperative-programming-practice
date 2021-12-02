# 12. óra

## Láncolt adatszerkezetek

* Mindkét feladat esetében legyen egy `.h` fájlod az implementált függvények szignatúrájával, egy `.c` fájlod ami implementálja ezeket a függvényeket, illetve egy másik `.c` fájlod a `main` függvény számára (innen tudod tesztelni a megírt függvényeidet).

* Inspirációként két láncolt-listás megoldás:
  * egyszerű láncolt-lista: [linked list](linked_list)
  * duplán láncolt lista kétféle választható implementációval (list vagy array): [doubly-linked list](doubly_linked_list)

## Box

* Valósítsunk meg egy olyan verem adatszerkezetet, amiben "dobozokat fogunk tudni egymásra pakolni". Ehhez hozzunk létre egy `Box` nevű struktúrát, ami rendelkezik egy egész szám típusú súly értékkel (`weight`) és egy `Box` struktúrára mutató pointerrel (`next`).
* Hozzunk létre egy globális pointer változót a `Box` struktúrából (`top`). Írjuk meg az `initialize` függvényt, amely `NULL`-ra állítja a top változót. A `main` függvényben hívjuk meg az `initialize`-t!
* Írjuk meg az `isEmpty` függvényt, amely visszaadja, hogy üres-e a stack vagy sem. (A stack akkor üres, ha a `top` változó `NULL` pointer.)
* Írjuk meg a `peek` függvényt, ami a jelenlegi legfelső `Box` súlyával tér vissza. (Ne feledkezzünk meg arról az esetről, amikor a stack üres!)
* Írjuk meg a `push` függvényt, ami egy egész számot kap paraméterül, ez lesz a következő doboz súlya. Hozzunk létre egy új elemet a heapen, és állítsuk be a súlyát. Az új elem next adattagja az előző adattagra mutasson! A `top` változó mutasson az új elemre.
* Írjuk meg a `pop` függvényt, ami felszabadítja a verem tetején lévő elemet, és a `top` változót az eggyel alatta lévőre állítja. (Ne feledkezzünk meg az üres stack lehetőségéről sem!)
* Írjuk meg a `copyTop` függvényt, amely lemásolja a verem legfelső elemét, és a verem tetejére helyezi a másolatot. Nézzük meg, mi történik, ha új memóriaterületet allokálunk a másolatnak, és adattagonkénti másolást végzünk, illetve azt is próbáljuk ki, hogy a `push` felhasználásával oldjuk meg az implementációt!

## Person

* Készítsünk el egy `Person` struktúrát, amely tartalmaz (legalább) egy név és egy életkor értéket. A nevet egy `char[30]` ban, az éltekort pedig egy `int *` által hivatkozott memóriaterületen tároljuk el. A struktúra kényelmes használata érdekében alkalmazzunk típus alias-ozást.
* A `main` függvényen belül hozzunk létre egy `Person`-t, melynek beállítjuk az adatait. Hozzunk létre egy újabb `Person`-t, ami értékül kapja az első `Person`-t. (pl: `p2 = p1;`)
* Írassuk ki a standard outputra a két `Person` értékeit. Módosítsuk az első `Person` életkorát. Ismét írjuk ki a két `Person` adatait. Miért változik meg a második `Person` életkorának adata? (Ezt hívjuk shallow copy-nak.)
* Javítsuk ki a programunkat úgy, hogy a `Person`-ok közötti értékadás helyett a konkrét mutatott értékeket másoljuk ki (deep copy). Ismét futtassuk le a programot, és demonstráljuk, hogy az első `Person` életkorának adatainak módosításával már nem változik meg a második `Person` életkora.
