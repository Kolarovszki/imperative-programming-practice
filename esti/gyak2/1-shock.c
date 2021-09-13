#include<stdio.h>

int main() {

    unsigned int a = 1;
    signed int b = -2;
    if(a + b > 0)
        printf("-1 is larger than 0.\n");
        
    /*****************************************/

    double sum1 = 9*(1./9);
    double sum2 = 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9 + 1./9;
    
    if (sum1 == 1.0 && sum2 == 1.0 && sum1 == sum2) {
      printf("Comparison succeeds\n");
    } else {
      printf("Unexpected result: %1.20f != %1.20f\n", sum1, sum2);
    }
    
    return 0;
}