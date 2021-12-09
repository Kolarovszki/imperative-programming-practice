#include <stdio.h>
#include "parityArray.h"



int main(void){
    ParityArray_t pa = NULL;
    pa = initParityArray(pa);
    
    int r[MAX_ARRAY_SIZE + 1] = {0};
    
    
    printParityArray(pa);
    r[0] = insertToParityArray(pa, 2);
    printParityArray(pa);
    r[1] = insertToParityArray(pa, 7);
    printParityArray(pa);
    r[2] = insertToParityArray(pa, 1);
    printParityArray(pa);
    r[3] = insertToParityArray(pa, 9);
    printParityArray(pa);
    r[4] = insertToParityArray(pa, 4);
    printParityArray(pa);
    r[5] = insertToParityArray(pa, 5);
    printParityArray(pa);


    printf("return values:\n");
    for (int i = 0; i < MAX_ARRAY_SIZE + 1; ++i){
        printf("%d ", r[i]);
    }
    printf("\n");

    
    releaseParityArray(pa);

    return 0;
}

