#include <stdio.h>
#include <stdbool.h>

int main() {
    int szam;  // Deklaráció

    szam = 3.14;  // Implicit konverzió
    printf("Double cast: %d\n", szam);

    szam = '\n';
    printf("Char cast: %d\n", szam);
    
    szam = true;
    printf("Bool cast: %d\n", szam);
    
    szam = "almafa";
    printf("Char[] cast: %d\n", szam);
    
    return 0;
}
