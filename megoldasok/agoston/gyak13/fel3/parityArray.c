#include <stdio.h>
#include <stdlib.h>
#include "parityArray.h"


struct ParityArray{
    int items[MAX_ARRAY_SIZE];
    
    int odd_idx, even_idx;
};


ParityArray_t initParityArray(ParityArray_t pa){
    if ( NULL == pa ){
        pa = (ParityArray_t)malloc(sizeof(ParityArray));
        if ( NULL == pa ){
            fprintf(stderr, "No memory\n");
            exit(1);
        }
    }

    for (int i = 0; i < MAX_ARRAY_SIZE; ++i){
        pa->items[i] = -1;
    }
    pa->odd_idx = MAX_ARRAY_SIZE - 1;
    pa->even_idx = 0;
    
    return pa;
}

int insertToParityArray(ParityArray_t pa, int item){
    if ( item < 0 || pa->even_idx > pa->odd_idx ){
        return 1;
    }
    
    if (item % 2){
        /* item is odd */
        pa->items[pa->odd_idx] = item;
        --(pa->odd_idx);
    }else{
        /* item is even */
        pa->items[pa->even_idx] = item;
        ++(pa->even_idx);    
    }
    
    return 0;
}

void printParityArray(ParityArray_t pa){
    for (int i = 0; i < MAX_ARRAY_SIZE; i++){
        if (pa->items[i] == -1){
            /* empty elem */
            /* printf("_ "); */
        }else{
            /* valid elem */
            printf("%d ", pa->items[i]);
        }
    }
    printf("\n");
}


void releaseParityArray(ParityArray_t pa){
    free(pa);
}
