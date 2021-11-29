#include <stdio.h>
#include <stdlib.h>
 
union Data {
   int i;
   float f;
};
 
int main( ) {

   union Data data;        

   data.i = 10;
   data.f = 220.5;  // we are overwriting i's value

   printf( "data.i : %d\n", data.i);    // corrupted
   printf( "data.f : %f\n", data.f);

   int * const * * const p;
   int i;
   int *tomb;
   int **tombokTombje;
   p[1][2][3] = 34;   /* szabad */
   p[2][3] = &i;      /* nem szabad */
   p[1] = &tomb;      /* szabad */
   p = &tombokTombje; /* nem szabad */
}


