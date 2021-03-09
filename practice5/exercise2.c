#include <stdio.h>

// 2nd

void swap(int* a_ptr, int* b_ptr) {
    int temp;

    printf("a_ptr: %p\n", a_ptr);

    // a_ptr points to `a` in main

    int original_value_of_a = *a_ptr;

    *a_ptr = *b_ptr;

    *b_ptr = original_value_of_a;
}


int main() {

    int a = 1;
    int b = 2;

    printf("&a: %p\n", &a);

    // int* is a type, not an operator
    int* a_ptr = &a;
    int* b_ptr = &b;
    
    swap(a_ptr, b_ptr);

    printf("a: %d\nb: %d\n", a, b);
}
