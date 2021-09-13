#include <stdio.h>


int main() {

    printf("Size of int: %ld\n", sizeof(int));

    // int      -> 2^32
    // int > 0  -> 2^31 - 1
    // int == 0 -> 1
    // int < 0  -> 2^31
    
    printf("Max int: %d\n", 2147483647 + 1);

    return 0;
}
