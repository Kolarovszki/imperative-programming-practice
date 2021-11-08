#include <stdio.h>


int* larger_pointer(int* a_ptr, int * b_ptr) {
    if (*a_ptr >= *b_ptr)
        return a_ptr;
        
    return b_ptr;
}

int main() {
    int a = 1;
    int b = 2;

    int* larger = larger_pointer(&a, &b);

    printf("larger: %d\n", *larger);
    return 0;
}
