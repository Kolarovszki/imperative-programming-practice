#include <stdio.h>
#include "matrix.h"

int main(){
    int a[DIM][DIM] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };
    int b[DIM][DIM] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };
    int p[DIM][DIM];
    
    product(a, b, p);
    
    for (int row = 0; row < DIM; row++){
        for (int col = 0; col < DIM; col++){
            printf("%d ", p[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
