# 5. gyakorlat

## Kötelező feladatok

- Változtasd meg egy változó értékét egy mutatón keresztül valamint egy függvényen keresztül.
- Írj függvényt, amely két változó tartalmát kicseréli! Tudod a függvényt egy tömb két elemének a megcserélésére alkalmazni? Hogyan?
- Változtasd meg egy mutató értékét egy mutatóra mutató mutatón keresztül. Ezután változtasd meg a mutatott mutató által mutatott értéket is!
- Mi történik, ha egy függvény egy lokális változóra mutató mutatót ad vissza, amit dereferálunk?

## Gyakorló feladatok

- Fussuk át a pointereket:
  - 0-pointers-intro.c
  - 1-null-pointer.c
  - 2-void-pointer.c
  - 3-pointer-arithmetic.c
  - 4-pointer-to-pointer.c
  - 5-array-of-pointers.c
  - 6-pointer-as-fun-param.c
  - 7-pointer-to-a-fun.c
  - 8-return-pointer.c
- Írj függvényt, ami egy paraméterül kapott tömb maximális elemére mutató mutatóval tér vissza. Mi az előnye és mi a hátránya ennek egy index visszaadásához képest?
- Az előző feladatban megírt függvényt tudjuk egy tömbnek a felére alkalmazni? Hogyan?
- Az előző feladatban megírt függvényt tudjuk egyetlen változóra alkalmazni, mintha az egy elemű tömb lenne?
- Egy függvény visszatérési érték segítségével is tud értéket visszaadni, vagy egy pointer segítségével is (pl scanf). Mikor melyiket érdemes használni? Mik az előnyeik/hátrányaik a módszereknek?
- Dereferáljunk egy null mutatót. Mi az eredmény?
- Indokold meg miért van szükség a scanf esetében a & operátorra, mikor egész változóba olvasunk be.
- Írj egy függvényt, ami két azonos tömbön belülre mutató mutatóról eldönti, hogy melyik mutat kisebb indexű elemre.
- Hogyan nézhet ki az strlen és az strcmp implementációja? Írjuk meg őket és teszteljük le!
- Írj egy függvényt, ami egy paraméterül kapott tömbben lévő elemek összegével tér vissza. A tömböt az első elemre mutató mutató és egy hosszt tartalmazó egész változó segítségével adjuk át! Írjuk meg a függvényt, hogy a [] operátor használata nélkül is, pointer aritmetika segítségével. Ki lehet találni a tömb méretét a függvényen belül a hosszt tartalmazó változó nélkül?
- Alakítsuk át az előző függvényt, hogy első elemre mutató mutató, és utolsó elem után mutató mutató segítségével kapjuk meg a tömböt. Mi történik, ha túlindexelünk eggyel? Mi történik, ha többel indexelünk túl?
- Alakítsuk át az előző feladatot, hogy átlagot számoljon. Hogyan tudjuk kiszámolni a tömb méretét a mutatópárból?


## Haladó feladatok

- Nézz utána hogyan lehet tömbre mutató mutatót deklarálni. Hogy néz ki egy függvény, ami tömbre mutató mutatóval tér vissza?
- Nézz utána, hogy hogyan lehet függvényre mutató mutatót deklarálni. Hogy néz ki egy függvényre mutató mutatóval visszatérő függvény deklarációja?
- Hogyan működik több dimenziós tömbben a pointer aritmetika?

## Beadandó házi feladat

- Írj egy függvényt, amely a paraméterül kapott három int-re mutató pointerek alapján növekedő sorba rendez három egész számot! (Megváltoztatja a változók értékét a pointeren keresztül.)
