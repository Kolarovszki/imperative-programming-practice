#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char *start);

int main(void){
    char buffer[100];
    int length;
    
    scanf("%s", buffer);
    
    length = strlen(buffer);
    
    char *str;
    str = (char *)malloc((length + 1) * sizeof(char));
    
    if (NULL == str){
        printf("No memory available\n");
        return 1;
    }
    
    for (int i = 0; i < length; i++){
        str[i] = buffer[i];
        /*
        *(str + i) = *(buffer + i)
        */
    }
    str[length] = '\0';
    
    char *newStr = reverse(str);
    
    printf("%s\n", str);
    printf("%s\n", newStr);
    
    free(str);
    free(newStr);

    return 0;
}

char *reverse(char *start){
    int length = strlen(start); /* without \0 at the end */
    
    char *newStr = (char *)malloc((length + 1) * sizeof(char));
    if (NULL != newStr){
        for (int i = 0; i < length; i++){
            newStr[i] = start[length - i - 1];
        }
        /* adding binary zero to the end */
        newStr[length] = '\0';
        
        return newStr;
    }else{
        printf("No memory available\n");
        exit(1);
    }
}

