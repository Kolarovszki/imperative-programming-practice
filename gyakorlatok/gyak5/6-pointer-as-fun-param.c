#include <stdio.h>
 
void init(int *p);

int main () {

   int s;
   init(&s);

   printf("Initialized value of s: %d\n", s );

   return 0;
}

void init(int *p) {
   scanf("%d", p);
   return;
}