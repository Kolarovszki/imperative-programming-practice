# 2. beadandó

Hozz létre egy 100 elemű tömböt!
A tömbben helyezz el 1 és 100 között véletlenszerűen egész számokat.
Hozz létre egy másik 100 elemű tömböt amibe mentsd el az előző tömb elemeinek önmagával és a szomszédaival vett átlagát,
a két szélső elemnél pedig csak az önmaga és a jobb/bal oldalával vett átlagát!
Nem kell foglalkozni azzal, hogy az átlag lebegőpontos legyen, elég int értékekkel számolni.
pl.:
```
eredeti: [1 5 21 13]
új: 	 [3 9 13 17]
```
Másold be az eredeti tömbbe az új értékeket!
Hozz létre 0 és 99 között egy random indexet!

Keresd meg a tömbben a maximum értéket és annak helyét a következőképpen:
Először a fentiekben inicializált indexről indulunk el.
Megkeressük tőle balra az első olyan értéket amelyik nagyobb mint az adott indexen lévő elem,
majd megkeressük a tőle jobbra lévő első olyan értéket, amelyik nagyobb mint az adott indexen lévő elem.
Ha találtunk jobbra is és balra is nagyobb elemet akkor, a következő pozíciónk a kettő közül a nagyobbik elem pozíciója lesz.
Ha nem találtunk egyetlen ilyen elemet sem akkor megtaláltuk a(z egyik) maximumot.
Mindezt csináljuk addig amíg meg nem találjuk a maximumot.
pl.:
```
b - bal nagyobb elem,
j - jobb nagyobb elem,
p - jelenlegi pozíció.

[66 74 80 70 63 50 30 60 71 74]
                p	           első pozíció random
[66 74 80 70 63 50 30 60 71 74]
             b  p     j        megtaláltuk az első bal és jobboldali értékeket amelyek nagyobbak a jelenlegi elemnél.
			                   mivel a baloldali elem nagyobb mint a jobboldali, ezért balra megyünk.
[66 74 80 70 63 50 30 60 71 74]
             p                 új pozíció
[66 74 80 70 63 50 30 60 71 74]
          b  p           j     jobboldal nagyobb
[66 74 80 70 63 50 30 60 71 74]
                         p     új pozíció
[66 74 80 70 63 50 30 60 71 74]
       b                 p  j  baloldal nagyobb
[66 74 80 70 63 50 30 60 71 74]
       p                       új pozíció
[66 74 80 70 63 50 30 60 71 74]
       p                       se jobbra se balra nincsen ennél nagyobb érték, megtaláltuk a maximumot, leálhatunk.
```

használd ezeket  a függvény szignatúrákat:

`void init(int* array,int* position)` -inicializálja a tömböt és a kezdőpozíciót.
                                     feltölti az eredeti tömböt számokkal, átlagolja az értékeket és 
                                     létrehozza a kezdőpozíciót.

`int findNextPos(int* array,int* position)` -megtalálja a következő pozíciót.

Figyelem, a tömb hossza fix a feladatban.
