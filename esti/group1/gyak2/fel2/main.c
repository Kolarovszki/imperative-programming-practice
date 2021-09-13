
#include <stdio.h>

int main(){
    int v;

    printf("Give me a number!\n");
    scanf("%d", &v);

    if ((v % 2 == 1) || (v % 2 == -1)){
         printf("Your number is odd.\n");
    }else{
         printf("Your number is even.\n");
    }

    return 0;
}
