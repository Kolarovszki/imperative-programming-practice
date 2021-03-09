#include <stdio.h>


int main() {
    int i = 1;

    int* ptr = &i;

    printf("%p\n", ptr);  // &: dereference
    // Outputs e.g. 0x7ffe87779b3c

    // i = 2;

    printf("%d\n", *(ptr)); // Same as i
 
    *ptr = 2;  // i = 2;

    printf("%d\n", *ptr);

    printf("%d\n", i);

}
