# 8. gyakorlat

Ezen a héten nincs igazi új anyag, egy picit komplexebb, de csak az eddigi anyagrészeket lefedő feladatot állítottunk nektek össze. Ezt önállóan kellene megoldani a gyakorlat idejében (persze segítséget kérni, kérdezni ér:) ), majd feltölteni Canvasbe a megoldást, hogy én is meg tudjam nézni. A félév végi értékelésbe semmilyen módon nem számít bele!

## Csináljunk egy aknakereső játékot!
A pálya mérete legyen fix 10 * 10-es, a sorok legyenek `A`-`J`-ig jelölve, az oszlopok `0`-`9`-ig, a mezők kezdetben üresek.

```
  0 1 2 3 4 5 6 7 8 9
A
B
C
D
E
F
G
H
I
J
```

A program során két táblára lesz szükségünk, egyre, amiben az adatokat tároljuk és egyre, amiben csak a felfedett mezőket tároljuk (néhány gyakorlat múlva ezt egyszerűsíthetjük `struct`-ok használatával ;) )
Írjunk egy függvényt, ami paraméterben átadott táblát kirajzol a fenti módon!
A pálya legyen 10x10-es, egészekből álló mátrix. Próbáld ki `int[][]` ábrázolással és sorfolytonos `int[]` reprezentációval is! (Használd a kényelmesebb változatot!)
Írjunk egy függvényt, ami véletlenszerűen elhelyez N aknát a táblán, figyelve arra, hogy ne helyezze olyan helyre, ahol már van akna.
Az aknák számát kérjük be parancsori paraméterként és ezt adjuk át az előző függvénynek. Az aknák száma ne lehessen 3-nál kevesebb és 30-nál több!
Írjunk egy függvényt, ami a pályán kitölti a "számokat", azaz minden olyan mezőre, ami nem akna, kitölti, hogy hány akna van a szomszédos mezőkön.
Ezután egészen addig kérjünk be koordinátákat a játékostól, amíg el nem fogynak az aknák, vagy fel nem robbant egyet.
A bekért adat legyen pl A9 formátum, így tudjuk, hogy az első karakter a sor, a második pedig az oszlop koordinátája.

## Továbbfejlesztési lehetőségek
- Adjuk hozzá extra funkcióként a mentés és bekérés lehetőségeket, ha a játékos a "save <fájlnév>" parancsot írja be, akkor mentse el az aktuális állást a megadott nevű fájlba, ha a "load <fájlnév>" parancsot adja, akkor töltse be az adott fájlból a játékállást.
Ne felejtsük el, hogy el kell mentenünk a minden adattal rendelkező játéktáblát, és a játékos által felfedett játéktáblát is!
- Gondolkozzunk el, hogy milyen formában érdemes menteni az adatot:
teljes tábla kirajzolva,
csak az aknák helyzete, amiből tudjuk rekonstruálni a táblát.
- Gondolkozzuk el rajta, hogy érhetnénk el, hogy a játékos ne tudjon "csalni", azaz az elmentett játékállást olvasva ne tudja könnyen kitalálni hol vannak az aknák.
