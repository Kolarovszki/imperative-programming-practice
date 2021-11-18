#include <stdio.h>
#include "vector.h"

int main(){
    int a[DIM] = {2, 3, 4, 1, 7};
    
    int sumValue = calculation(a, 0, &sum);
    int prodValue = calculation(a, 1, &prod);
    
    printf("sum of vector: %d\n", sumValue);
    printf("product of vector: %d\n", prodValue);


    sumValue = calculation(a, 10, &sum);
    prodValue = calculation(a, -2, &prod);
    
    printf("sum of vector: %d\n", sumValue);
    printf("product of vector: %d\n", prodValue);

    return 0;
}
