#include <stdio.h>
 
/* global variable declaration */
int a = 20;
int without_init_global;

int increase_a(int b);
 
int main () {

  /* local variable declaration in main function */
  int a = 10;
  int b = 20;
  int c = 0;
  int without_init_local;

  printf ("value of a in main() = %d\n",  a);
  c = increase_a(b);
  printf ("value of c in main() = %d\n",  c);

  printf("Automatic initialization? global: %d, local: %d", without_init_global, without_init_local);
  
  return 0;
}

/* function to add two integers */
int increase_a(int b) {

   printf ("value of a in fun = %d\n",  a);
   printf ("value of b in fun = %d\n",  b);

   return a + b;
}