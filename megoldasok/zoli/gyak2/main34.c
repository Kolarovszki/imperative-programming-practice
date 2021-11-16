#include <stdio.h>


int main() {
    int szam;  // Deklaracio

    printf("Szam erteke: %d\n", szam);

    printf("Uj ertek:");

    scanf("%d", &szam);

    if (szam % 2 == 0)
        printf("Paros!");
    else
        printf("Paratlan!");

    printf("\n");

    if (szam > 0)
        printf("Pozitiv!");
    else if (szam < 0)
        printf("Negativ!");
    else
        printf("Nulla!");

    printf("\n");

    return 0;
}
