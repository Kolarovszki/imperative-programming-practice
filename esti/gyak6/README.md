# String műveletek, parancssori argumentumok, fájlkezelés, switch-case 

## Kötelező feladatok

* Készíts egy programot, ami a standard bemenetről szavakat olvas (ha már
  ismered a fájlkezelő műveleteket, fájlból is olvashatod a szavakat). Az
  alábbi feladatok megoldásához használj standard string függvényeket (`#include
  <string.h>`).
  * Írd ki az 5 karakternél hosszabb szavakat (`strlen`).
(
  * Írd ki az x karaktert tartalmazó szavakat (`strchr`).
  * Írd ki az alma szót tartalmazó szavakat (pl. dalmata, almafa) (`strstr`).
  * Vizsgáld meg, hogy szerepel-e a beolvasott szavak között a "cica" szó
    (`strcmp`).
  * Írd ki a számjegyeket tartalmazó szavakat (`strpbrk`).
)
* Írjunk egy programot, amely a parancssori argumentumként kapott egész számokat
  beleírja egy `"even_numbers.txt"` nevű fájlba, amennyiben párosak. Futtassuk
  le újra a programot, és nézzük meg, hogy bővült-e a fájl tartalma. (Nem fog,
  ha `"w"`-vel vagy `"w+"`-al nyitottuk meg)
* Módosítsuk az előző programot úgy, hogy a fájl tartalmának felülírása helyett
  kibővül a fájl az újabb kiírni kívánt adatokkal.
(
* Egy új programban olvassuk vissza a fájl tartalmát, és adjuk össze a benne
  tárolt számokat. Írjuk ki az összeget. A fájlnevet a parancssori
  argumentumból nyerjük ki!
)

## Gyakorló feladatok

* Írjuk ki a parancssori argumentumok számát. Miért nem lesz ez a szám kevesebb
  mint 1?
* Írjunk egy olyan szorzást végző programot, amely egy számlálós ciklusban
  összeadja az "első" paraméterül kapott számot a "második" paraméter
  értékeszer, majd a végeredményt kiírja a konzolra. (tipp: nézz utána az `atoi`
  függvénynek)
* Írjuk meg a faktoriális műveletet rekurzió segítségével. Magyarázzuk el a
  rekurzív függvények két fő komponensét (termináló eset, és rekurziót hívó
eset). `rec-sample.c`
* Írjuk egy programot, ami eltárolja a nevünket egy "player.txt" nevű fájlban.
* Mi történik?
  * `what-0.c`
  * `what-1.c`
  * `what-2.c`
  * `what-3.c`
  * `what-4.c`
  * `what-5.c`
  * (`what-6.c`)
  * (`what-7.c`)
* Filekezelés:
  * `0-write.c`
  * `1-read.c`
* Parancssori argumentumok kezelése: `2-command-line-args.c`
* Írjunk egy programot, ami egy tetszőleges tartalmat ír egy fájlba. A fájl írása után ne zárjuk le a fájlt, hanem rakjunk egy beolvasást, ami megakasztja a programot. Nézzük meg, hogy mit tartalmaz a fájl. (Ha `ssh`-n keresztül dolgozunk, akkor nyissunk egy új ssh kapcsolatot.) Engedjük tovább a programot, hogy fusson végig, majd nézzük meg ismét, hogy mi a fájl tartalma!
* Írjuk meg a keresés tételét egy hátultesztelős ciklussal! Adjuk vissza a tömbnek azt az indexét, ahol található a keresett elem. Találat esetén lépjünk ki a ciklusból (`break`).
* Írjuk meg a `toLowerCase` függvényt. A függvény kapjon egy karaktertömböt, és minden nagybetűjét (ASCII táblázatban kikereshető, hogy mely nagybetűs karaktereknek mi az értéke) írjuk át a neki megfelelő kisbetűre! Ezt követően írjuk ki, hogy milyen betűt módosítottunk. Ha nem kell módosítani a karakteren, akkor ne csináljuk a karakterrel semmit (`continue`).
* Írjunk programot mely a standard inputról beolvasott stringben megkeresi a magánhangzókat és azokat eggyel eltolja (`a->e`, `e->i`, `i->o`, `o->u`, `u->a`), minden mást változatlanul hagy. A megoldásod szervezd úgy, hogy legyen egy `change` nevű függvényed mely egyetlen karaktert dolgoz fel: cseréli ha szükséges vagy változatlan hagyja, majd ezt visszaadja. Adj több megoldást az alábbiak szerint:
  * A string feldolgozását különböző ciklusokkal old meg (`for`, `while`, `do`-`while`) - törekedj minél kompaktabb megoldásokra
  * A `change` függvényt valósítsd meg:
    * verzió: tisztán `if`-ek használatával
    * verzió: `switch`-`case` használatával
    * verzió: 2 tömb (`from`, `to`) használatával, melyekben előre rögzítve vannak a cserélendő karakter párok
    * verzió: 1 tömb használatával hogyan oldható meg?
* Készíts egy programot, ami kiírja egy fájl n-edik sorát. A fájl nevét és az n értéket parancssori argumentumként lehessen megadni.

## Haladó feladatok

1. Készíts egy programot, ami egy fájlban megszámolja a különböző szavak számát. A fájlon végighaladva tároljuk el a megtalált szavakat egy tömbben, ha az még nem szerepelne benne. (Tehát, definiáljunk egy halmaz-szerű tömbös implementációt.)
1. Készíts egy programot, ami egy fájl tartalmát lefordítja Morse-kódra. Az eredmény egy újonnan létrehozott fájlba kerüljön. A bemeneti és kimeneti fájlok neveit parancssori argumentumokban lehessen megadni.

## Házi feladat

* Írjunk egy `LOG-INFO-WARNING-ERROR` kiíró függvényt. Az első paramétere
  legyen egy pozitív egész szám, ami az üzenet típusát hivatott jelezni (pl.:
`0-INFO`, `1-WARNING`, `2-ERROR`, minden más pedig `LOG`). A második paramétere
legyen a kiírni kívánt üzenet. `switch-case` vezérléssel döntsük el, hogy mit
írunk ki a kiírni kívánt üzenet elé. (pl.: `"LOG - user signed in."`, `"ERROR -
could not connect to server."`). Nézzük meg, hogy mi történik, ha nem írunk ki
`break`-eket az egyes `case`-ek végére . Nézzük meg, hogy mi történik, ha nem
írunk `default` ágat.
