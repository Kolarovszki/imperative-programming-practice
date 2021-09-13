#include <stdio.h>


int main() {
    int szam;  // Deklaráció

    printf("Input: ");

    scanf("%d", &szam);

    if (szam % 2 == 0)
	printf("Paros!");
    else
	printf("Paratlan!");

    printf("\n");

    return 0;
}
