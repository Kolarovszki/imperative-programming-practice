# 7. gyakorlat feladatsor

## Kötelező feladatok

1. Deklarálj és definiálj egy változót a main függvényen kívül!
Változtasd az értékét és írasd ki!
2. Készíts egy függvényt, benne deklarálj és definiálj egy változót! El tudod érni a változót a függvényen kívül?
3. Írj egy elágazást az előző feladatban megírt függvénybe a változó definíció után! Vizsgáld meg, hogy a változót eléred-e az if feltételében, valamint az igaz blokkjában, továbbá opcionálisan az else és else if ágában!
4. Deklarálj és definiálj változót egy if bármelyik ágában, vagy egy tetszőleges ciklus magjában! Vizsgáld meg, hogy a változót eléred-e a blokkon kívül!
5. Hozz létre egymásba ágyazott scope-okat ("{}" párok közti blokkokat), vezess be mindegyikben egy változót! Vizsgáld, hogy melyik scope-ból melyik változókat éred el! Mikor lehet érdemes scope-okat használni?
6. Deklarálj egy két változós függvényt ugyanazon változónevet használva a két paraméternek! Mi történik?
7. Hozz létre egy függvényt, deklarálj és definiálj benne egy static változót! Növeld meg a változó értékét és írasd ki! Hívd meg a main-ben többször is a függvényt! Mi történik?
8. Írj egy swap függvényt, amely megcseréli két int változó értékét!
9. Írj egy olyan függvényt, amely két int pointert vár paraméterül és visszaadja a nagyobb értékre mutató pointert!
10. A következő feladat csak GCC fordítóval megoldható: módosítsd a swap feladatot úgy, hogy a függvényt a main-en belül deklarálod és definiálod! Mikor lehet ez a funkcionalitás hasznos?
11. Hozz létre egy my_utils.h és my_utils.c fájlt! A 8. és 9. feladatban létrehozott függvények deklarációit helyezd a header file-ba, a definícióit pedig a c fájlba. Egy main.c fájlban include-old a headert, majd a main-ben hívd a függvényeket! Fordítsd és futtasd a kódod!
12. Hozz létre további függvényeket a my_utils.c file-ban! A függvények hivatkozzanak egymásra! Ezeket a függvényeket meg tudod hívni a main.c fájlban is? Miért? Miért nem?
13. Lokális, globális, formális változók:
  - 0-local-global-formal.c
Láthatóság. Mit csinál a program?
  - what-0.c
  - what-1.c
  - what-2.c
  - what-3.c
  - what-4.c
  - what-5.c
  - what-6a.c, what-6b.c, what-6c.c
  
## Gyakorló feladatok

1. Deklarálj és definiálj egy változót egy ciklus magjában, majd ágyazz be egy második ciklust és vizsgáld, hogy azon belül eléred-e a külső ciklusban deklarált változót!
2. Deklarálj előre egy függvényt, majd definiáld azt, paraméterül más paraméter neveket használva! Mi történik? Mikor lehet ez hasznos?
3. Static változó segítségével hozz létre egy olyan faktoriális függvényt, mely számon tartja, hogy hányszor hívták 1-nél kisebb paraméterrel!
4. Írj egy olyan függvényt, amely két int-et vár paraméterül és egy, az eredményre mutató pointert ad vissza! Mi történik, mikor a main-ben kiírod az eredményt (dereferálva)?
5. Vegyük elő ismét a múlt heti gyakorló feladatok közül a 4. feladatot, mikor a beolvasott szövegben a magánhangzókat kellett egyel "eltolni".  Készíts olyan megoldást melyben a change függvényben egyetlen return szerepel illetve lokálisan eltárolja az utoljára cserélt magánhangzót. Figyelj arra, hogy egy függvényhívás tényleg csak eggyel tolja a magánhangzót!
6. Előzőhöz extra: hogyan lehetne megcsinálni, hogy egymás után ugyan olyan karaktereket ne cseréljen, azaz 'almafa' -> 'elmafa', 'aaa' -> 'eaa', de 'eioua' -> 'iouae', 'diofa' -> 'doufe'?

## Haladó feladatok

1. Hozz télre külön modulokat (.h és .c párokat) az eddigi gyakorlatok függvényeiből! pl Matematikai modult (faktoriális, stb), String Utils modult (strlen, strcpy saját implementációk), ArrayUtils modult! Fordítsd le a modulokat külön-külön, majd írj egy main.c fájlt, melyben include-olod őket és használod a függvényeikat, viszont úgy fordítsd a main.c állományt, hogy a hivatkozott libeket ne fordísd újra! (Object file-ok használata)
