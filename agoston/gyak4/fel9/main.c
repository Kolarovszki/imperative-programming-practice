#include <stdio.h>

double productOfArrays(int first[], double second[], int length);

int main(){
    int first[] =  {1, 2, 3, 4, 5/*, 6, 7*/};
    double weights[] = {0.5, 0.5, 2.0, 3.0, 5.0/*, 0.0, -1.0*/};
    
    int length1 = sizeof(first) / sizeof(first[0]);
    int length2 = sizeof(weights) / sizeof(weights[0]);
    
    int length = length1 == length2 ? length1 : 0;
    
    double product = productOfArrays(first, weights, length);
    
    printf("Product: %lf\n", product);
    printf("expected: %lf\n", 0.5*1+0.5*2+2.0*3+3.0*4+5.0*5);
    
    return 0;
}



double productOfArrays(int first[], double second[], int length){
    int i;
    double sum = 0.0;
    for (i = 0; i < length; i++){
        sum += first[i] * second[i];
    }
    
    return sum;
}

