#include <stdio.h>


int swap (int* a , int* b )
{
    int result = *a ;

    *a = * b ;
    *b = result ;
}


int main() {

    int a = 1, b = 2;

    swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);

    return 0;
}
