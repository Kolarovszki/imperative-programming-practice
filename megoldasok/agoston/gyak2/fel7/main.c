#include <stdio.h>

int main(){
    int a, b;
    double d;

    scanf("%d %d", &a, &b);

    // Wrong!
    d = (a + b) / 2;
    printf("Average: %f\n", d);

    // Correct
    d = (double)(a + b) / 2;
    printf("Average: %f\n", d);

    // Correct
    d = (a + b) / 2.0;
    printf("Average: %f\n", d);

    return 0;
}
