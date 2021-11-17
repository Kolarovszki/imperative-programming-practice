#include <stdio.h>
#include "3-matrix.h"
 
int main() 
{
    
    int mat1[N][N] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 
    int mat2[N][N] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 
    int res[N][N];
    int i, j;
    multiply(mat1, mat2, res);
 
    printf("Result: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
 
    return 0;
}