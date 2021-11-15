#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 21

int main(void){
    char buffer[BUFFSIZE];
    
    scanf("%s", buffer);
    
    int length = strlen(buffer);
    if (
        char *str = 
            (char *)malloc((length+1)*sizeof(char))
    ){
        for (int i = 0; i <= length; i++){
            str[i] = buffer[i];
        }
        printf("%s\n", str);
    }else{
        printf("no mem\n");
        exit(1);
    }
    
    free(str);
    
    return 0;
}
