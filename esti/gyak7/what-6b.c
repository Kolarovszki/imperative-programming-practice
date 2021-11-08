#include <stdio.h>

static int x = 444 ;

foo()
{
  printf("x in fileB: %d\n", x );
  x = 25;
  printf("x in fileB: %d\n", x );
}