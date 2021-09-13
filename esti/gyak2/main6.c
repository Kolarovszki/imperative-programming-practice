#include <stdio.h>


int main() {
    int a = 42;
    int b = 69;

    double atlag;

    // Explicit konverzió
    atlag = ((double) a + b) / 2; // 55.5

    // atlag = (a + b) / 2.0;

    printf("Atlag: %.1f", atlag);

    return 0;
}
