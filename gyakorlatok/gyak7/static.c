#include <stdio.h>
 
/* function declaration */
void func(void);
 
static int count_static = 5; /* global variable */
int count = 5; /* global variable */
 
int main() {

   while(count-- && count_static--) {
      func();
   }
   
   //v0
   print_out(count, count_static);
   
   //v1
   //print_out();
	
   return 0;
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d, count is %d and static count is %d\n", i, count, count_static);

   auto int j;  /* auto is the default qualifier */
   register int alma = 12;
   
   // Does not work
   //printf("address of alma: %d", &alma);   
}