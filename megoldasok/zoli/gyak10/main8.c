#include <stdio.h>

#include "linalg.h"



int main() {
    double vector[] = {1.0, 2.0, 3.0, 4.0};
    
    double sum = reduce(vector, 4, 0.0, add);

    printf("sum: %f\n", sum);

    double prod = reduce(vector, 4, 1.0, multiply);

    printf("prod: %f\n", prod);
    
    return 0;
}
