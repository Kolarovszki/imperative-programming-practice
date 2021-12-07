#include <stdio.h>
#include "box.h"


int main(void){
    initialize();
    
    printStack();
    
    push(12);
    push(19);
    push(21);
    push(13);
    push(15);

    printStack();
    
    pop();
    
    printStack();
    
    copyTop();
    
    printStack();
    
    
    release();
    
    return 0;
}
