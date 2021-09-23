#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    
    if (10 < number && number < 100){
        printf("Version a: Correct number\n");
    }
    /*
    if ((10 < number) < 100){
        printf("Version b: Wrong solution\n");
    }
    if (10 < (number < 100)){
        printf("Version c: Wrong solution\n");
    }
    if (10 < number < 100){
        printf("Version d: Wrong solution\n");
    }
    */
    
    return 0;
}
