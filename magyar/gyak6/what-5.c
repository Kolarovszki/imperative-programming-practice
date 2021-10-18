#include <stdio.h> 

void f(char**); 

int main() 
{ 
    char *d[] = { "ab", "cd", "ef", "gh", "ij", "kl" }; 
    f(d); 
    return 0; 
} 

void f(char **p) 
{ 
    char *t; 
    t = (p += sizeof(int))[-1]; 
    printf("%s\n", t); 
} 