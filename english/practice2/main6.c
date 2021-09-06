#include <stdio.h>


int main() {
    unsigned long int number = 8;

    int max = 2147483647; 

    printf("%d\n", max);
    printf("%d\n", max + 1);

    // INTEGER OVERFLOW

    // long -> bigger integer

    printf("Size of an int: %ld\n", sizeof(number));

    return 0;
}
