#include <stdio.h>

#include "box.h"



int main(void){
    initialize();
    /*
    if (top){
        printf("Not null\n");
    }else{
        printf("Null\n");
    }
    */
    
    push(12);
    push(25);
    copyTop();
    
    push(3);

    int w = pop();
    printf("popped: %d\n", w);
    
    w = pop();
    printf("popped: %d\n", w);
    
    w = pop();
    printf("popped: %d\n", w);
    
    w = pop();
    printf("popped: %d\n", w);
    
    return 0;
}
