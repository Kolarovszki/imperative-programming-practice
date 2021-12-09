#include <stdio.h>
#include "parityArray.h"

int insertToParityArray(int pa[], int item){
    static int even_idx = 0;
    static int odd_idx = MAX_ARRAY_SIZE - 1;
    
    if ( item < 0 || even_idx > odd_idx ){
        return 1;
    }
    
    if (item % 2){
        /* item is odd */
        pa[odd_idx] = item;
        --odd_idx;
    }else{
        /* item is even */
        pa[even_idx] = item;
        ++even_idx;    
    }
    
    return 0;
}

void printParityArray(int pa[]){
    for (int i = 0; i < MAX_ARRAY_SIZE; i++){
        if (pa[i] == -1){
            /* empty elem */
            /* printf("_ "); */
        }else{
            /* valid elem */
            printf("%d ", pa[i]);
        }
    }
    printf("\n");
}
