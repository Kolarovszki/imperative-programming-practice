# 9. gyakorlat elméleti összefoglalója

## Mi a baj a statikus tömbökkel?

- Program írásakor nem tudjuk előre, mennyi memóriára lesz szüksége a felhasználónak;
- Változók élettartama nehezen kontrollálható;
- Nagy tömbök nem férnek el a veremben.

## Milyen konstrukcióval lehetne ezt megoldani?

- Futásidőben dönthetjük el, hogy mennyi memóriát foglalunk.
- Eldönthetjük, hogy mikor szabadítjuk fel a lefoglalt memóriaterületet.

**Mindennek az ára:** nekünk kell lefoglalni és felszabadítani a memóriaterületet is!

**Ha nem szabadítjuk fel a memóriát, akkor a programunk által használt memória egyre növekszik, amíg el nem fogy a számítógép memóriája!**


## `malloc()` és `free()`

- `malloc()` -> *lefoglal* memóriaterületet;
- `free()` -> *felszabadít* memóriaterületet.

```
void *malloc(size_t size);
```

A `malloc()` visszaad egy pointert ami a lefoglalt memóriaterületre mutat, és a megadott mennyiségű memória van alatta lefoglalva (byte-ban).

Ha nem sikerül (mondjuk mert nincs elég memória), akkor `NULL` pointert ad vissza. Ezért minden esetben le kell ellenőriznünk, hogy sikerült-e a memória lefoglalása.

Mint eddig, a **pointer nem tud arról, hogy mekkora lefoglalt memória-területre mutat**.

```
void free(void *pointer);
```

A `free()` paraméterül várja a felszabadítandó pointert. *Nem kell átadni a lefoglalt memória méretét!*

## Hol van a dinamikus lefoglalt memóriaterület?

Ha a veremben (stacken) tárolódnának, akkor a függvényhívás végeztével automatikus kitörlődne a veremből.

A dinamikusan lefoglalt memória a kupacon (heapen) tárolódik el. Ez nincs automatikusan kezelve mint a verem, ezért kell nekünk mindig "kézzel" felszabadítani a memóriaterületet.
