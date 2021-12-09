#include <stdio.h>


#define MAX_ARRAY_SIZE 5


int insertToParityArray(int pa[], int item);
void printParityArray(int pa[]);


int main(void){
    int pa[MAX_ARRAY_SIZE];
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i){
        pa[i] = -1;
    }
    
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


    return 0;
}


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
