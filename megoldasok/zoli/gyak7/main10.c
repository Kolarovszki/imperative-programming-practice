#include <stdio.h>



int main() {
    int a = 1;
    int b = 2;

    void swap() {
        int tmp = a;

        a = b;

        b = tmp;
    }

    swap();

    printf("a, b: %d, %d\n", a, b);
    return 0;
}
