# 2. gyakorlat

## Kötelező feladatok

1. Nézzük végig, értelmezzük az alábbi
   fájlokat:
 – 1-shock.c
 – 2-base-types.c
 – 4-conversion.c

2. Deklarálj egy int típusú változót, és írd ki az értékét. Figyeld meg mi
   egyváltozó kezdőértéke!

3. Adj új értéket az előző változónak (lehet konstans vagy scanf-el beolvasvaa
   billentyűzetről), majd írd ki, hogy a változó értéke páros vagy páratlan.

4. Írd ki, hogy a szám pozitív, negatív, vagy nulla-e.

5. Próbálj meg értékül adni az int típusú változónak egy valós számot,
   egykaraktert, egy logikai (bool) értéket, és egy stringet. Ha sikerül az
   értékadás,akkor írd ki a változó értékét. Fordítás közben használd a -W,
   -Wall, -Wextra kapcsolókat.

6. Az előző feladat mintájára vizsgáld meg az összes alaptípus
   köztiátjárhatóságot. Minden alaptípus átkonvertálható mindegyik másikra?
   Ha igen, akkor mi a konverzió
   szabálya?

7. Határozd meg, hogy melyik a legnagyobb és legkisebb ábrázolható
   egészszám (sizeof). A legnagyobb ábrázolható egész számot tedd egy
   változóba,majd adj a változóhoz 1-et. Figyeld meg mi lett az eredmény!

8. Határozd meg két szám átlagát. Figyelj arra, hogy az eredmény valósszám.

## Gyakorló feladatok

1. Készíts egy Fahrenheit-Celsius átalakító programot ( C = (F-32)/1.8 ). Írd
   ki a [-20; 200] intervallum Fahrenheit értékeit 10-es léptékkel, és a
   hozzájuktartozó Celsius-fokot.

2. Írd ki két sorban a “Hello” és “world” szavakat, egy printf() hívással. Akét
   szót tedd idézőjelek közé a kimenetben.

3. Írj programot, ami bekér egy számot és megfordítja azt. Csak
   aritmetikaiműveleteket használj. Pl.: 12345 -> 54321

4. Írd ki egy szám összes osztóját.

5. Határozd meg két szám legnagyobb közös osztóját, lehet brute force,kivonásos
   módszer (Linkek egy külső oldalra) vagy az Euklideszi algoritmus(Linkek egy
   külső oldalra)

6. Írj ki egy 10x10-es szorzótáblát. Az egy sorban lévő számokat
   tabulátorralválaszd el.

7. Írd ki 0-tól 1-ig a valós számokat 0.1-es lépésközzel.1

8. Rajzolj ki egy üres sakktáblát. A sötét mezőket [] jelölje, a
   világosakatpedig két space. Használd a kettővel való oszthatóságot.

9. Írd ki, hogy a géped hány bájton ábrázol egy int, long int, unsigned
   int,unsigned long int, char, bool, float, double, long double értéket.

10. Vizsgáld meg egy számról, hogy palindrom-e. A megoldáshoz csak aritmetikai
műveleteket használj. Pl.: 12321 palindrom, de 12345 nem az.

## Haladó feladatok

1. Nézd meg, értsd meg: 5-conversion-tricky.c

2. Határozd meg két egész számról, hogy barátságosak-e. Két
   egész számbarátságos, ha az egyik önmagánál kisebb osztóinak összege megegyezik
   a másikkal, és fordítva. Pl.: 220 és 284

3. Határozd meg, hogy egy adott szám prím-e. Írd ki 1000-ig a prímeket.

4. Az opcionáls feladatoknál kiírtuk különböző alaptípusok bájtban
   megadottméretét. Hátározzuk meg ugyanezt az ezekre a típusokra mutató
   pointerek,illetve ilyen típusú elemeket tartalmazó tömbök esetében is.
