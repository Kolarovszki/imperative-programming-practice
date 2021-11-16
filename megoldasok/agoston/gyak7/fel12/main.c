#include <stdio.h>
#include "my_utils.h"

int main(void){
    int pwd;
    printf("Give me the password!\n");

    scanf("%d", &pwd);
    if (pwd == password()){
        printf("All my secrets\n");
    }else{
        printf("Access denied\n");
    }

    return 0;
}
