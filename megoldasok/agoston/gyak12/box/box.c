#include <stdlib.h>
#include <stdio.h>

#include "box.h"


void initialize(void){
    top = NULL;
}


int isEmpty(void){
    return (top == NULL);
}


int peek(void){
    if ( isEmpty() ){
        return -1;
    }else{
        return top->weight;
        /* return (*top).weight; */
    }
}


void push(int weight){
    Box_t newElem = (Box_t)malloc(sizeof(Box));
    if (newElem){
        newElem->weight = weight;
        newElem->next = top;
        
        top = newElem;
    }else{
        fprintf(stderr, "No memory\n");
    }
}


int pop(void){
    if ( isEmpty() ){
        return -1;
    }

    Box_t topElem = top;
    
    top = topElem->next;
    
    int weight = topElem->weight;
    
    free(topElem);
    
    return weight;
}


/* bad code */
void copyTopFields(void){
    if ( isEmpty() ){
        fprintf(stderr, "Nothing on top\n");
        exit(1);
    }
    
    Box_t newTop = (Box_t)malloc(sizeof(Box));
    if (newTop){
        newTop->weight = top->weight;
        newTop->next = top->next;
        /* szándék lenne:
        newTop->next = top;
        */
        
        top = newTop;
    }else{
        fprintf(stderr, "No memory\n");
    }
    
}


void copyTop(void){
    if ( isEmpty() ){
        fprintf(stderr, "Nothing on top\n");
        exit(1);
    }
    push( peek() );
}

