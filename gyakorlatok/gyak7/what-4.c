#include <stdio.h>

int g = 777;

int g( int a, int b )
{
  int g=3 ;
  printf("scope f: a=%d\tb=%d\tg=%d\n", a, b, g );
}

int main ( void )
{
  g( 1, 2 ) ;
  return 0 ;
}