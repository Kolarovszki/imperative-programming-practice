#include <stdio.h>


int main(){
    int i;

    scanf("%d", &i);

    // a / b
    // a % b
    // a = (a / b) * b + a % b

    if (i % 2 == 0){
        printf("Your number is even.\n");

    }else{
        printf("Your number is odd.\n");
    }

    return 0;
}
