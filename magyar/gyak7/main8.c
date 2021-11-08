#include <stdio.h>


void swap(int* a_ptr, int * b_ptr) {
    int tmp = *a_ptr;

    *a_ptr = *b_ptr;

    *b_ptr = tmp;
}

int main() {
    int a = 1;
    int b = 2;

    swap(&a, &b);

    printf("a, b: %d, %d\n", a, b);
    return 0;
}
