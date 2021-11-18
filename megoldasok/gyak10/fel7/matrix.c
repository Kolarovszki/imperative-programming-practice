#include "matrix.h"
#include <stdio.h>

/* a és b NxN mátrixok:
szorzat: c
c[i,j] = sum[k = 1..N] a[i,k] * b[k,j]
*/

void product(int a[DIM][DIM], int b[DIM][DIM], int res[DIM][DIM]){
    for (int row_res = 0; row_res < DIM; row_res++){
        for (int col_res = 0; col_res < DIM; col_res++){
            int sum = 0;
            for (int i = 0; i < DIM; i++){
                sum += a[row_res][i] * b[i][col_res];
            }
            
            res[row_res][col_res] = sum;
        }
    }
}
