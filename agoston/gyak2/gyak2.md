# 2. gyakorlat

## Alaptípusok

### Kötelező feladatok

- Nézzük végig, értelmezzük az alábbi fájlokat:
    - 1-shock.c
    - 2-base-types.c
    - 4-conversion.c
- Deklarálj egy int típusú változót, és írd ki az értékét. Figyeld meg mi egy változó kezdőértéke!
- Adj új értéket az előző változónak (lehet konstans vagy scanf-el beolvasva a billentyűzetről), majd írd ki, hogy a változó értéke páros vagy páratlan.
- Írd ki, hogy a szám pozitív, negatív, vagy nulla-e.
- Próbálj meg értékül adni az int típusú változónak egy valós számot, egy karaktert, egy logikai (bool) értéket, és egy stringet. Ha sikerül az értékadás, akkor írd ki a változó értékét. Fordítás közben használd a -W, -Wall, -Wextra kapcsolókat.
- Az előző feladat mintájára vizsgáld meg az összes alaptípus közti átjárhatóságot. Minden alaptípus átkonvertálható mindegyik másikra? Ha igen, akkor mi a konverzió szabálya?
- Határozd meg, hogy melyik a legnagyobb és legkisebb ábrázolható egész szám (sizeof). A legnagyobb ábrázolható egész számot tedd egy változóba, majd adj a változóhoz 1-et. Figyeld meg mi lett az eredmény!
- Határozd meg két szám átlagát. Figyelj arra, hogy az eredmény valós szám.

### Gyakorló feladatok

- Készíts egy Fahrenheit-Celsius átalakító programot ( C = (F-32)/1.8 ). Írd ki a [-20; 200] intervallum Fahrenheit értékeit 10-es léptékkel, és a hozzájuk tartozó Celsius-fokot.
- Írd ki két sorban a "Hello" és "world" szavakat, egy printf() hívással. A két szót tedd idézőjelek közé a kimenetben.
- Írj programot, ami bekér egy számot és megfordítja azt. Csak aritmetikai műveleteket használj. Pl.: 12345 -> 54321
- Írd ki egy szám összes osztóját.
- Határozd meg két szám legnagyobb közös osztóját, lehet brute force, kivonásos módszer (Linkek egy külső oldalra) vagy az Euklideszi algoritmus (Linkek egy külső oldalra)
- Írj ki egy 10x10-es szorzótáblát. Az egy sorban lévő számokat tabulátorral válaszd el.
- Írd ki 0-tól 1-ig a valós számokat 0.1-es lépésközzel.
- Rajzolj ki egy üres sakktáblát. A sötét mezőket [] jelölje, a világosakat pedig két space. Használd a kettővel való oszthatóságot.
- Írd ki, hogy a géped hány bájton ábrázol egy int, long int, unsigned int, unsigned long int, char, bool, float, double, long double értéket.
- Vizsgáld meg egy számról, hogy palindrom-e. A megoldáshoz csak aritmetikai műveleteket használj. Pl.: 12321 palindrom, de 12345 nem az.

### Haladó feladatok

- Nézd meg, értsd meg: 5-conversion-tricky.c
- Határozd meg két egész számról, hogy barátságosak-e. Két egész szám barátságos, ha az egyik önmagánál kisebb osztóinak összege megegyezik a másikkal, és fordítva. Pl.:220 és 284
- Határozd meg, hogy egy adott szám prím-e. Írd ki 1000-ig a prímeket.
- Az opcionáls feladatoknál kiírtuk különböző alaptípusok bájtban megadott méretét. Hátározzuk meg ugyanezt az ezekre a típusokra mutató pointerek, illetve ilyen típusú elemeket tartalmazó tömbök esetében is.