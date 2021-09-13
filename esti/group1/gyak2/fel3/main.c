#include <stdio.h>

int main(){
    int v;

    scanf("%d", &v);

    if (v > 0){
        printf("The number is positive\n");
    }else if (v < 0){
        printf("The number is negative\n");
    }else if (v == 0){
        printf("The number is zero\n");
    }else{
        printf("Failed");
        return 109;
    }


    return 0;
}
