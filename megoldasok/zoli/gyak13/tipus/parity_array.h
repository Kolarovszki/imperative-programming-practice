#ifndef PARITY_ARRAY_H
#define PARITY_ARRAY_H

#define MAX_ARRAY_SIZE 32

typedef struct ParityArray {
    int array[MAX_ARRAY_SIZE];
    int even_idx;
    int odd_idx;
} ParityArray;

void initParityArray(ParityArray* parity_array); 

int insertToParityArray(ParityArray* parity_array, int item);

void printParityArray(ParityArray* parity_array);

#endif
