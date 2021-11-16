#include <stdio.h>

#include "my_utils.h"


int main() {
    int a = 1;
    int b = 2;

    swap(&a, &b);

    print_pointer(&a);

    printf("a, b: %d, %d\n", a, b);
    return 0;
}
