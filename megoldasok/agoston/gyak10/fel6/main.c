#include <stdio.h>
#include "vector.h"

int main(){
    int a[DIM] = {2, 3, 4};
    int b[DIM] = {4, 1, -2};
    
    printf("scalar product: %d\n", scalar(a, b));

    return 0;
}
