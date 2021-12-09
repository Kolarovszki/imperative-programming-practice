#include <stdio.h>
#include <stdlib.h>
#include "parityArray.h"



int initParityArray(
    ParityArray *pa,
    unsigned int size
){
    if ( NULL == pa ){
        return 1;
    }

    pa->items = (int *)malloc(size * sizeof(int));
    if ( NULL == pa->items ){
        return 1;
    }
    
    pa->size = size;
    pa->odd_idx = pa->size - 1;
    pa->even_idx = 0;
    
    return 0;
}

int insertToParityArray(ParityArray *pa, int item){
    if ( pa->even_idx > pa->odd_idx ){
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

void printParityArray(ParityArray *pa){
    for (unsigned int i = 0; i < pa->size; i++){
        /* 2 4 _ _ _ 5 7 9 1 */
        /*     2   4         */
        if ( i < pa->even_idx || i > pa->odd_idx ){
            /* valid elem */
            printf("%d ", pa->items[i]);
        }else{
            /* empty elem */
            /* printf("_ "); */
        }
    }
    printf("\n");
}


void disposeParityArray(ParityArray *pa){
    pa->size = 0;
    pa->odd_idx = 0;
    pa->even_idx = 0;
    free(pa->items);
}
