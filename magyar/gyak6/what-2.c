#include <stdio.h> 

int main() 
{ 
    int a = 36; 
    int* ptr; 
    ptr = &a; 
    printf("%p %p", *&ptr, &*ptr); 

    return 0; 
} 
