#include <stdio.h>

#define DIM 3


int scalarProduct(int a[DIM], int b[DIM]);

int main(){
    int a[DIM] = {-7, 5, 1};
    int b[DIM] = {-3, 1, 0};
    
    printf("Scalar product of a and b: %d\n", scalarProduct(a, b));


    return 0;
}




int scalarProduct(int a[DIM], int b[DIM]){
    int sum = 0;
    for (int i = 0; i < DIM; i++){
        sum += a[i] * b[i];
    }

    return sum;
}
