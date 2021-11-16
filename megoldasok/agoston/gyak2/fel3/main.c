#include <stdio.h>


int main(){
    int i;

    scanf("%d", &i);

    if (i > 0){
        printf("Your number is positive.\n");
    }else if (i < 0){
        printf("Your number is negative.\n");
    }else if (i == 0){
        printf("Your number is zero.\n");
    }else{
        printf("Error\n");
        return 109;
    }

    // same behavior
    if (i > 0){
        printf("Your number is positive.\n");
    }else if (i < 0){
        printf("Your number is negative.\n");
    }else{
        printf("Your number is zero.\n");
    }

    return 0;
}
