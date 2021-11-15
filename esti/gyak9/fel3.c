#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 21

char *readWord(void);

int main(void){
    char *words[5];
    for (int i = 0; i < 5; i++)
        words[i] = readWord();
    
    
    for (int i = 0; i < 5; i++){
        printf("%s\n", words[5 - i - 1]);
    }
    
    for (int i = 0; i < 5; i++){
        free(words[i]);
    }
    

    return 0;
}



char *readWord(void){
    char buffer[BUFFSIZE];
    
    scanf("%s", buffer);
    char *str;
    
    int length = strlen(buffer);
    if ((str = 
            (char *)malloc((length+1)*sizeof(char))
    )){
        for (int i = 0; i <= length; i++){
            str[i] = buffer[i];
        }
        
    }else{
        printf("no mem\n");
        exit(1);
    }
    
    return str;

}

