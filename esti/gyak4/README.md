
# 4. gyakorlat

## Kötelező feladatok

- Írj függvényt, amely visszaadja egy egészeket tároló tömbben az összes elem összegét!
- Írj függvényt, amely a paraméterül kapott stringnek (karaktertömbnek) visszaadja a hosszát (karakterek számát).
- Írj programot, amely két karaktersorozatról eldönti, hogy melyik van előrébb az abc-sorrendben!

## Gyakorló feladatok

- Írj egy függvényt, amely visszaadja, hogy a paraméterül kapott évszám szökőév-e, vagy sem!
Szökőévek a következők: minden néggyel osztható év, kivéve a százzal is oszthatókat. Szökőévek viszont a 400-zal osztható évek. 
Vagyis a századfordulók évei közül csak azok szökőévek, amelyek 400-zal is oszthatók.
- Írjunk egy függvényt, amely (-1)-gyel szorozza a paraméterül kapott számot. Írassuk ki az eredményt. Mi történik, ha  `unsigned`  változót adunk át neki paraméterként?
- Fussuk át a C-s tömböket az alábbi gyűjtemény alapján:
  -   `1-arrays.c`
  -   `2-multi-arrays.c`
  -   `3-shift.c`
- Írj programot, amely egy adott méretű tömböt feltölt nullákkal!
- Mit csinálnak az alábbi programok?
  -   `what-1.c`
  -   `what-2.c`
  -   `what-3.c`
- Írj programot, amely egy egészeket tároló tömb maximális elemét kiírja!
- Írj programot, amely egy egészeket tároló tömb második legkisebb elemét írja ki!
- Alakítsd át az első feladatot úgy, hogy átlagot tudjon számolni! (Tudjon lebegőpontos súlyokkal is számolni.)
- Írj egy függvényt, amely rekurzívan meghatározza a fibonacci sorozat n edik elemét! A függvény kapja meg paraméterül n-et.
- Írj egy függvényt, amely iteratívan meghatározza a fibonacci sorozat n edik elemét! A függvény kapja meg paraméterül n-et. Hasonlítsd össze az előző két függvény futási idejét.
- Írj programot, amely egy egészeket tároló tömbben kicseréli a legkisebb és a legnagyobb elemet!
- Írj programot, amely bekér egy stringet (karaktertömböt) és megszámoljaa sorok számát.
- Írj programot, amely meghatározza, hogy a beírt szövegben hány mássalhangzó, illetve magánhangzó van! (Csak az angol abc betűit használjuk.)
- Próbáld ki, hogy ha egy karaktertömbbe beolvasod az árvíztűrőtükör-fúrógép szót, akkor hány byte-on tárolódik el!
- Írj egy programot, amely egy egészeket tároló tömbről eldönti, hogy van-ebenne két szám, amelyek barátságosak! Két szám barátságos, ha a pozitív,önmagánál kisebb osztóik összege a másik számmal egyezik (pl. 220 és 284).
- Írj programot, amely a táblázatkezelő szoftverek oszlopnév-oszlopszámkonvertálást elvégzi! (Angol abc-t tekintjük.) (A -> 1, Z -> 26, AA -> 27, ... )
- Írj egy programot, amelyben létrehozol egy 101 elemű tömböt, feltöltöd random számokkal 0 és 999 közt, majd meghatározod a középső elemet! Középső elemnek a medián értéket tekintjük. Alakítsd át úgy, hogy 100 elemű tömbre is működjön!
- Írj egy függvényt, amely kirajzol egy "X" karakterekből álló lépcsőt! A függvény kapja meg paraméterül
a lépcsőfokok számát.

## Haladó feladatok

- Írj függvényt, amely kiírja a paraméterül átadott szó összes permutációját!
- Írj egy függvényt, amely kiszámolja a paraméterül kapott tömb elemei hosszú oldalakból képezhető legnagyobb háromszög területét!
- Írj programot, amely bekér egy stringet (karaktertömböt) és megszámolja a szavak számát. (Egyezzen a viselkedése a wc unix paranccsal!)
- Írj egy függvényt, amely eldönti a paraméterül kapott számról, hogy palindrom-e, vagy sem!

## Házi feladat (beadandó)
- Egészítsd ki a tömb összegét számoló függvényt (első feladat), hogy legyen egy extra tömb, amely súlyokat határoz meg az elemekhez, és így számold ki és add vissza az összeget! (Legyen a súlyok típusa lebegőpontos!) Pl. Elsőtömb:  `[1, 2, 3, 4, 5]`, második:  `[1.0, 1.5, 2.5, 3.5, 5.2]`, az összeg: `1*1+1.5*2+2.5*3+3.5*4+5.2*5`.
