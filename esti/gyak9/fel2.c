#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 21

char *readWord(void);
char *reverse(char *str);

int main(void){
    char *word;
    word = readWord();
    char *revWord = reverse(word);
    
    printf("%s\n", revWord);
    
    free(word);
    free(revWord);

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


char *reverse(char *str){
    int length = strlen(str);
    char *revstr;
    if ((revstr = 
            (char *)malloc((length+1)*sizeof(char))
    )){
        for (int i = 0; i < length; i++){
            revstr[i] = str[length - i - 1];
        }
        revstr[length] = '\0';
    }else{
        printf("no mem\n");
        exit(1);
    }
    return revstr;
}
