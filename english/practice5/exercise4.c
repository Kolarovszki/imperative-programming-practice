#include <stdio.h>


int main () {
    int i = 1;

    int* ptr = &i;
/*
//    int** ptr_ptr = &ptr;

//    ptr = *ptr_ptr

    ptr = &ptr;

    printf("ptr: %p\n", ptr);

    printf("&ptr: %p\n", &ptr); 

    printf("*ptr: %p\n", *ptr); 
   */ 
    printf("sizeof(i): %u\n", sizeof(i));

    printf("sizeof(&i): %u\n", sizeof(&i));

    printf("sizeof(&&i): %u\n", sizeof(int**));
}
