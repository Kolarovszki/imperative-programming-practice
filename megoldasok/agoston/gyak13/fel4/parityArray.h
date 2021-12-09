#ifndef PARITYARRAY_H
#define PARITYARRAY_H

struct ParityArray;
typedef struct ParityArray ParityArray;

int initParityArray(
    ParityArray *pa,
    unsigned int size
);
int insertToParityArray(ParityArray *pa, int item);
void printParityArray(ParityArray *pa);
void disposeParityArray(ParityArray *pa);


struct ParityArray{
    int *items;
    
    unsigned int size;
    unsigned int odd_idx, even_idx;
};



#endif /* PARITYARRAY_H */
