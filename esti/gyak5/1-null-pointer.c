#include <stdio.h>

int main () {

   int  *ptr = NULL;
   
   if (!ptr) {
       printf("The value of ptr is : %p\n", ptr);
       //printf("The value of *ptr is : %d\n", *ptr);
   }
   
   int c = 123;
   ptr = &c;
   
   if (ptr) {
       printf("The value of *ptr is : %d\n", *ptr);
   }
   
   return 0;
}