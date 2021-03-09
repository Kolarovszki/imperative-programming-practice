#include <stdio.h>

// 1st

void swap(int a, int b) {
    int temp;

    printf("&a: %p\n", &a);
   
    // If the pointer is different, it is a different variable.

    int original_value_of_a = a;

    a = b;

    b = original_value_of_a;
}


int main() {
    
    int a = 1;
    int b = 2;

    printf("&a: %p\n", &a);

    swap(a, b);
    
    printf("a: %d\nb: %d\n", a, b);
}   

