#include <stdio.h>


int main() {
    int a = 7;

    int b = 10;

    // DO NOT TOUCH ABOVE

    int sum = a + b; // 17

    int iaverage = sum / 2.0;

    //           EXPLICIT TYPECASTING
    double average = ((double) sum) / 2;

    // int / int -> int
    // int / double -> double
    // double / int -> double
    // double / double -> double :)

    printf("Int Average: %d\n", iaverage);

    printf("Average: %f\n", average);

    return 0;
}
