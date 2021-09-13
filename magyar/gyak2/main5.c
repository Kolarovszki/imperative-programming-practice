#include <stdio.h>
#include <stdbool.h>


int main() {
    int szam;  // Deklaracio
    
    szam = 3.14;

    printf("Szam erteke (double): %d\n", szam);

    szam = '\n';

    printf("Szam erteke (char): %d\n", szam);

    szam = true;

    printf("Szam erteke (bool): %d\n", szam);

    szam = "alma";

    printf("Szam erteke (char[]): %d\n", szam);

    return 0;
}
