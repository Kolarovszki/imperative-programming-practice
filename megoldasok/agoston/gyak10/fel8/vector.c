#include "vector.h"

int scalar(int v1[DIM], int v2[DIM]){
    int sum = 0;
    for (int i = 0; i < DIM; i++){
        sum += v1[i] * v2[i];
    }
    
    return sum;
}


int calculation(int vector[DIM], int init, int (*f)(int, int)){
    /* initialization of the returning value */
    /* kezdeti érték */
    int returnValue = init;
    
    for (int i = 0; i < DIM; i++){
        /* elemenként elvégzem a műveletet (f) az eddigi eredményen és az adott elemen */
        returnValue = f(returnValue, vector[i]);
    }

    /* visszatérek az eredménnyel */
    return returnValue;
}

int sum(int a, int b){
    return a + b;
}

int prod(int a, int b){
    return a * b;
}
