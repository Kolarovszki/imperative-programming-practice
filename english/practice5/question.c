

#include <stdio.h>


int main() {
    int i = 4;

    int* a; // Create a pointer of an integer.

    *a; // Get the value under the pointer a

    a = &i;

    printf("Pointer: %p\n", a);

    printf("Value under pointer: %d\n", *a);

    printf("Value of a value: %d\n", *i);
    
    /**
     * * on a variable: get its value
     * * on a type: a type of pointer is created
     * NO CONNECTION.
     */
}
