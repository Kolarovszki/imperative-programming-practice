#include <stdio.h>
#include "my_utils.h"




void swap(int* a_ptr, int * b_ptr) {
    int tmp = *a_ptr;

    print_pointer(a_ptr);

    *a_ptr = *b_ptr;

    *b_ptr = tmp;
}

void print_pointer(int* ptr) {
    printf("Value of pointer: %d\n", *ptr);
}

