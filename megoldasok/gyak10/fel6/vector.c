#include "vector.h"

int scalar(int v1[DIM], int v2[DIM]){
    int sum = 0;
    for (int i = 0; i < DIM; i++){
        sum += v1[i] * v2[i];
    }
    
    return sum;
}
