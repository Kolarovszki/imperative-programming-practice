#include <stdio.h>


int main () {
    int i = 1;

    int* i_ptr = &i;

    int** i_ptr_ptr = &i_ptr;

    printf("i_ptr: %p\n", i_ptr);
    printf("i_ptr_ptr: %p\n", i_ptr_ptr);

    **i_ptr_ptr = 3;

    printf("i: %d\n", i);
}
