#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 100

char *readOneWord();


int main(){
    char *words[5];
    
    for (int i = 0; i < 5; i++){
        words[i] = readOneWord();
    }
    
    
    for (int i = 4; i >= 0; i--){
        printf("%s\n", words[i]);
    }
    
    /* freeing!!! */
    for (int i = 0; i < 5; i++){
        free(words[i]);
    }
    
    return 0;
}


char *readOneWord(){
    char buffer[BUFFERSIZE];
    
    scanf("%s", buffer);
    
    int length = strlen(buffer) + 1; /* \0 included */
    
    char *str = (char *)malloc(length * sizeof(char));
    
    for (int i = 0; i < length; i++){
        str[i] = buffer[i];
    }
    
    return str;
}
