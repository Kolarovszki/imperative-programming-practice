#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
/* function to generate and return random numbers. */
int* getRandom() {

   static int r[10];
   int i;
 
   /* set the seed */
   srand( (unsigned)time( NULL ) );
	
   for (i = 0; i < 10; ++i) {
      r[i] = rand();
   }
 
   return r;
}
 
/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;

   p = getRandom();
	
   for ( i = 0; i < 10; i++ ) {
      printf("*(p + %d) : %6d\t p[%d] : %6d\n"
            , i, *(p + i), i, p[i]);
   }
 
   return 0;
}