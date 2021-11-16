#include <stdio.h> 

int main() 
{ 
    int i = 25; 
    int* j; 
    int** k; 
    j = &i; 
    k = &j; 
    printf("%p %p %d", k, *k, **k); 

    return 0; 
} 
