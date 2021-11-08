#include <stdio.h>

int j;

int fact( int n )
{
  int value = 1;
  for ( j=1; j<=n; j++ ) value *= j;
  return value;
}

int main ( void )
{
  for ( j=1; j<7; j++ )
    printf("factorial of %d is %d\n", j, fact(j) );

  return 0 ;
}