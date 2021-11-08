# 7. gyakorlat feladatsor

## Kötelező feladatok

1. Hozz létre egymásba ágyazott scope-okat (`{}` párok közti blokkokat), vezess be mindegyikben egy változót! Vizsgáld, hogy melyik scope-ból melyik változókat éred el! Mikor lehet érdemes scope-okat használni?
1. Írj egy swap függvényt, amely megcseréli két int változó értékét! Minden futáskor írjuk ki, hogy hányszor lett eddig meghívva a függvény! (Használj static változót!)
1. Írj egy olyan függvényt, amely két int pointert vár paraméterül és visszaadja a nagyobb értékre mutató pointert!
1. Hozz létre egy my_utils.h és my_utils.c fájlt! Az előző két feladatban létrehozott függvények deklarációit helyezd a header file-ba, a definícióit pedig a c fájlba. Egy main.c fájlban include-old a headert, majd a main-ben hívd a függvényeket! Fordítsd és futtasd a kódod!

## Gyakorló feladatok

1. Deklarálj és definiálj egy változót a main függvényen kívül!
Változtasd az értékét és írasd ki!
1. Készíts egy függvényt, benne deklarálj és definiálj egy változót! El tudod érni a változót a függvényen kívül?
1. Írj egy elágazást az előző feladatban megírt függvénybe a változó definíció után! Vizsgáld meg, hogy a változót eléred-e az if feltételében, valamint az igaz blokkjában, továbbá opcionálisan az else és else if ágában!
1. Deklarálj és definiálj változót egy if bármelyik ágában, vagy egy tetszőleges ciklus magjában! Vizsgáld meg, hogy a változót eléred-e a blokkon kívül!
1. Deklarálj és definiálj egy változót egy ciklus magjában, majd ágyazz be egy második ciklust és vizsgáld, hogy azon belül eléred-e a külső ciklusban deklarált változót!
1. Deklarálj előre egy függvényt, majd definiáld azt, paraméterül más paraméter neveket használva! Mi történik? Mikor lehet ez hasznos?
1. A következő feladat csak GCC fordítóval megoldható: módosítsd a swap feladatot úgy, hogy a függvényt a main-en belül deklarálod és definiálod! Mikor lehet ez a funkcionalitás hasznos?
1. Hozz létre egy függvényt, deklarálj és definiálj benne egy static változót! Növeld meg a változó értékét és írasd ki! Hívd meg a main-ben többször is a függvényt! Mi történik?
1. Static változó segítségével hozz létre egy olyan faktoriális függvényt, mely számon tartja, hogy hányszor hívták 1-nél kisebb paraméterrel!
1. Írj egy olyan függvényt, amely két int-et vár paraméterül és egy, az eredményre mutató pointert ad vissza! Mi történik, mikor a main-ben kiírod az eredményt (dereferálva)?
1. Vegyük elő ismét a múlt heti gyakorló feladatok közül a 4. feladatot, mikor a beolvasott szövegben a magánhangzókat kellett egyel "eltolni".  Készíts olyan megoldást melyben a change függvényben egyetlen return szerepel illetve lokálisan eltárolja az utoljára cserélt magánhangzót. Figyelj arra, hogy egy függvényhívás tényleg csak eggyel tolja a magánhangzót!
1. Előzőhöz extra: hogyan lehetne megcsinálni, hogy egymás után ugyan olyan karaktereket ne cseréljen, azaz 'almafa' -> 'elmafa', 'aaa' -> 'eaa', de 'eioua' -> 'iouae', 'diofa' -> 'doufe'?
1. Deklarálj egy két változós függvényt ugyanazon változónevet használva a két paraméternek! Mi történik? (
1. Hozz létre további függvényeket az órán megírt my_utils.c file-ban! A függvények hivatkozzanak egymásra! Ezeket a függvényeket meg tudod hívni a main.c fájlban is? Miért? Miért nem?
1. Lokális, globális, formális változók:
  - 0-local-global-formal.c
1. Láthatóság. Mit csinál a program?
  - what-0.c
  - what-1.c
  - what-2.c
  - what-3.c
  - what-4.c
  - what-5.c
  - what-6a.c, what-6b.c, what-6c.c
  
## Haladó feladatok

1. Hozz télre külön modulokat (.h és .c párokat) az eddigi gyakorlatok függvényeiből! pl Matematikai modult (faktoriális, stb), String Utils modult (strlen, strcpy saját implementációk), ArrayUtils modult! Fordítsd le a modulokat külön-külön, majd írj egy main.c fájlt, melyben include-olod őket és használod a függvényeikat, viszont úgy fordítsd a main.c állományt, hogy a hivatkozott libeket ne fordísd újra! (Object file-ok használata)

## Házi feladat

Ezen a héten egy kicsit komolyabb és hosszabb házi feladatot kaptok.
Ezt önállóan kellene megoldani (persze segítséget kérni, kérdezni ér:) ), majd feltölteni Canvasbe a megoldást.

### A feladat: Csináljunk egy aknakereső játékot!
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

- A program során két táblára lesz szükségünk, egyre, amiben az adatokat tároljuk és egyre, amiben csak a felfedett mezőket tároljuk (néhány gyakorlat múlva ezt egyszerűsíthetjük `struct`-ok használatával ;) )
- Írjunk egy függvényt, ami paraméterben átadott táblát kirajzol a fenti módon!
- A pálya legyen 10x10-es, egészekből álló mátrix. Próbáld ki `int[][]` ábrázolással és sorfolytonos `int[]` reprezentációval is! (Használd a kényelmesebb változatot!)
- Írjunk egy függvényt, ami véletlenszerűen elhelyez N aknát a táblán, figyelve arra, hogy ne helyezze olyan helyre, ahol már van akna.
- Az aknák számát kérjük be parancsori paraméterként és ezt adjuk át az előző függvénynek. Az aknák száma ne lehessen 3-nál kevesebb és 30-nál több!
- Írjunk egy függvényt, ami a pályán kitölti a "számokat", azaz minden olyan mezőre, ami nem akna, kitölti, hogy hány akna van a szomszédos mezőkön.
- Ezután egészen addig kérjünk be koordinátákat a játékostól, amíg el nem fogynak az aknák, vagy fel nem robbant egyet.
- A bekért adat legyen pl A9 formátum, így tudjuk, hogy az első karakter a sor, a második pedig az oszlop koordinátája.

### Továbbfejlesztési lehetőségek
- Adjuk hozzá extra funkcióként a mentés és bekérés lehetőségeket, ha a játékos a "save <fájlnév>" parancsot írja be, akkor mentse el az aktuális állást a megadott nevű fájlba, ha a "load <fájlnév>" parancsot adja, akkor töltse be az adott fájlból a játékállást.
Ne felejtsük el, hogy el kell mentenünk a minden adattal rendelkező játéktáblát, és a játékos által felfedett játéktáblát is!
- Gondolkozzunk el, hogy milyen formában érdemes menteni az adatot:
teljes tábla kirajzolva,
csak az aknák helyzete, amiből tudjuk rekonstruálni a táblát.
- Gondolkozzuk el rajta, hogy érhetnénk el, hogy a játékos ne tudjon "csalni", azaz az elmentett játékállást olvasva ne tudja könnyen kitalálni hol vannak az aknák.
