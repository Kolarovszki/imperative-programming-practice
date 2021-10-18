#include<stdio.h> 

int main() 
{ 
    char a[] = { 'A', 'B', 'C', 'D' }; 
    char* p = &a[0]; 
    *p++;
    printf("%c %c %c\n", a[0], a[1], a[2]);    
    printf("%c \n", *++p);
    printf("%c %c %c\n", a[0], a[1], a[2]);
    printf("%c \n", --*p);    
    printf("%c %c %c\n", a[0], a[1], a[2]);

    return 0;
} 