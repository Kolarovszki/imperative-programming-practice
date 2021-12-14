#ifndef PARITY_ARRAY_H
#define PARITY_ARRAY_H

typedef struct ParityArray {
    int size;
    int* array;
    int even_idx;
    int odd_idx;
} ParityArray;

int initParityArray(ParityArray* parity_array, int size); 

int insertToParityArray(ParityArray* parity_array, int item);

void printParityArray(ParityArray* parity_array);

void disposeParityArray(ParityArray* parity_array);

#endif
