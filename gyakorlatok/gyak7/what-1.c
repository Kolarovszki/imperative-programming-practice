#include <stdio.h>

int main() {
   int i = 1;
   
   {int i = 2;}
   
   printf("%d\n", i);

   return 0;
}