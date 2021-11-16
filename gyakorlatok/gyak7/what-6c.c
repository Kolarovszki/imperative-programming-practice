#include <stdio.h>

extern int x ;
int main()
{
  printf("x before foo: %d\n", x );
  foo();
  printf("x after  foo: %d\n", x );
  return 0;
}