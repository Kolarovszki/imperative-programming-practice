#include <stdio.h>

int productOfArrays(int first[], int second[], int length);

int main(){
    int first[] =  {1, 2, 3, 4, 5/*, 6, 7*/};
    int second[] = {1, 1, 2, 3, 5/*, 0, -1*/};
    
    int length1 = sizeof(first) / sizeof(first[0]);
    int length2 = sizeof(second) / sizeof(second[0]);
    
    int length = length1 == length2 ? length1 : 0;
    
    int product = productOfArrays(first, second, length);
    
    printf("Product: %d\n", product);
    printf("expected: %d\n", 1*1+1*2+2*3+3*4+5*5);
    
    return 0;
}



int productOfArrays(int first[], int second[], int length){
    int i, sum;
    sum = 0;
    for (i = 0; i < length; i++){
        sum += first[i] * second[i];
    }
    
    return sum;
}

