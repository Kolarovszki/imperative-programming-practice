#include <stdio.h>

int minus(unsigned int a_copy) {  // Called function
    return -1 * a_copy;
}


int main() {  // Caller function
    unsigned int a = 3;

    int a_minus = minus(a);  // automatic type conversion

    printf("%d\n", a_minus);
}
