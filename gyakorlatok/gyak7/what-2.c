#include <stdio.h>

int* func() {
    int j = 12;
    return &j;
}

int main() {
   
   int* a = func();
   
   int k = 45;
   
   printf("%d\n", *a);

   return 0;
}