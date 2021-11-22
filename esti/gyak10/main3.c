#include <stdio.h>

#define DIM 5

int sum(int a, int b);
int prod(int a, int b);

int foldl(int v[DIM], int initialValue, int (*f)(int, int));

int main(){
    int v[DIM] = {1, 3, 4, 5, -2};

    printf("Sum of vecto: %d\n", foldl(v, 0, &sum));
    printf("Productum of vecto: %d\n", foldl(v, 1, &prod));
    printf("Falssum of vecto: %d\n", foldl(v, 1, &sum));

    return 0;
}



int sum(int a, int b){
    return a + b;
}
int prod(int a, int b){
    return a * b;
}


int foldl(int v[DIM], int initialValue, int (*f)(int, int)){
    int result = initialValue;
    
    for (int i = 0; i < DIM; i++){
        result = f(result, v[i]);
    }
    
    return result;
}
