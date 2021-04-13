#include <stdio.h>

#include "my_utils.h"  // <-- 1st here, in the caller


int main() {
    int a = 1, b = 2;

    swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);

    print_pointer(&a);

    return 0;
}
