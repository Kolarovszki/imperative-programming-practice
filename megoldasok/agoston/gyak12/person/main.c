#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "person.h"


int main(void){
    Person p1 = {
        "Kovacs Laszlo",
        (int *)malloc(sizeof(int))
    };
    
    if (p1.age == NULL){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    *(p1.age) = 21;

    Person p2;
    
    strcpy(p2.name, p1.name);
    p2.age = (int *)malloc(sizeof(int));

    if (p2.age == NULL){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    *(p2.age) = *(p1.age);
    
    printf("p1: %s, %d\n", p1.name, *(p1.age));
    printf("p2: %s, %d\n", p2.name, *(p2.age));
    
    *(p1.age) = 22;
    p2.name[3] = 'o';
    *(p2.age) = 20;
    
    printf("p1: %s, %d\n", p1.name, *(p1.age));
    printf("p2: %s, %d\n", p2.name, *(p2.age));
    

    return 0;
}
