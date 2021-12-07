#include <stdlib.h>
#include <stdio.h>
#include "box.h"

Box_t top;

struct Box{
    int weight;
    Box_t next;
};



void initialize(void){
    top = NULL;
}


int isEmpty(void){
    return (NULL == top);
}


int peek(void){
    if ( isEmpty() ){
        exit(1);
    }
    
    return top->weight;
}


void push(int weight){
    Box_t newBox = (Box_t)malloc(sizeof(Box));
    
    newBox->weight = weight;
    newBox->next = top;
    
    top = newBox;
}


void pop(void){
    if ( isEmpty() ){
        return;
    }
    
    Box_t highest = top;
    top = top->next;
    
    free(highest);
}


/* element wise copy */
void copyTopFirst(void){
    if ( isEmpty() ){
        return;
    }
    
    Box_t newBox = (Box_t)malloc(sizeof(Box));
    
    newBox->weight = top->weight;
    newBox->next = top->next;
    
    top = newBox;
}


void printStack(void){
    Box_t current = top;
    while (NULL != current){
        printf("%d ", current->weight);
        
        current = current->next;
    }
    printf("\n");
}


void copyTop(void){    
    push( peek() );
}


void release(void){
    while (NULL != top){
        pop();
    }
}


