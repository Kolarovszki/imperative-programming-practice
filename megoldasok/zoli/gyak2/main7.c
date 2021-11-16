#include <stdio.h>
#include <limits.h>


int main() {
    printf("Size of int: %lu\n", sizeof(int)); 

    printf("Max int: %d\n", (int)4294967295);

    printf("INT_MAX: %d\n", INT_MAX + 1);

    return 0;
}
