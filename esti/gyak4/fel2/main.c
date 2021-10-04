#include <stdio.h>

int strlenown(char str[]);

int main(){
    char str[100];
    
    scanf("%s", str);
    
    printf("Length of str: %d\n", strlenown(str));
    
    return 0;
}




int strlenown(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

    return length;
}

