#include <stdio.h>

int main(){
    char c1 = 1, c2 = 2, c3 = 3;
    int i1 = 1001, i2 = 1002, i3 = 1003;
    float f1 = 5.5;
    double d1 = 15000.7;

    printf("first\n");
    printf("c1: %d c2: %d c3: %d\n", c1, c2, c3);
    printf("i1: %d i2: %d i3: %d\n", i1, i2, i3);
    printf("f1: %f d1: %lf\n", f1, d1);

    c1 = i1;
    c2 = f1;
    c3 = d1;

    printf("second\n");
    printf("c1: %d c2: %d c3: %d\n", c1, c2, c3);
    printf("i1: %d i2: %d i3: %d\n", i1, i2, i3);
    printf("f1: %f d1: %lf\n", f1, d1);

    i1 = c1;
    i2 = f1;
    i3 = d1;

    printf("third\n");
    printf("c1: %d c2: %d c3: %d\n", c1, c2, c3);
    printf("i1: %d i2: %d i3: %d\n", i1, i2, i3);
    printf("f1: %f d1: %lf\n", f1, d1);

    f1 = i1;
    d1 = c3;

    printf("fourth\n");
    printf("c1: %d c2: %d c3: %d\n", c1, c2, c3);
    printf("i1: %d i2: %d i3: %d\n", i1, i2, i3);
    printf("f1: %f d1: %lf\n", f1, d1);

    return 0;
}
