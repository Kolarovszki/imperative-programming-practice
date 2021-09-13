#include <stdio.h>


int main() {
    int szam;  // Deklaráció

    printf("Input: ");

    scanf("%d", &szam);

    if (szam > 0)
	    printf("Pozitiv!");
    else if (szam < 0)
	    printf("Negativ!");
    else
	    printf("Nulla!");
    
    printf("\n");

    return 0;
}
