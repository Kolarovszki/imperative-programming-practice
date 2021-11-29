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
   
   union Data *a = malloc(sizeof(union Data)*23);
   a[0].f = .2;
   a[10].i = 111;
   (a+11)->i = 22;
   (*(a+12)).i = 89;
   // you have to know which member was set...
   printf("%f, %d, %d, %d\n", a[0].f, a[10].i, a[11].i, a[12].i);
   free(a);
   
   // A better way
   
   struct Data2 {
        enum {INT, FLOAT} kind;        //Tag field
        union {
           int i;
           float f;
        } u;
   };

   struct Data2 *a2 = malloc(sizeof(struct Data2)*23);
   a2[10].kind = INT;
   a2[10].u.i = 111;
   a2[11].kind = FLOAT;
   a2[11].u.f = .23;
   
   int i = 10;
   while(i<12) {
       if (a2[i].kind == INT) {printf("%d\n", a2[i].u.i);}
       if (a2[i].kind == FLOAT) {printf("%f\n", a2[i].u.f);}
       i++;
   }
   
   free(a2);
   
   return 0;
}