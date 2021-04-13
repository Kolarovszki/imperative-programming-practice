#include <stdio.h>
#include "my_utils.h"  // <-- 2nd at the implementation


void print_pointer(int* ptr) {  // Dummy function
    printf("Pointer value: %d\n", *ptr);

    int a = 1;
    int b = 2;

    swap(&a, &b);
}


int swap(int* a , int* b)
{
    int result = *a ;

    *a = * b ;
    *b = result ;

    print_pointer(a);
}  // Definition!


