#ifndef PARITYARRAY_H
#define PARITYARRAY_H

#define MAX_ARRAY_SIZE 5


struct ParityArray;
typedef struct ParityArray ParityArray;

typedef ParityArray *ParityArray_t;

ParityArray_t initParityArray(ParityArray_t pa);
int insertToParityArray(ParityArray_t pa, int item);
void printParityArray(ParityArray_t pa);
void releaseParityArray(ParityArray_t pa);




#endif /* PARITYARRAY_H */
