#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 100

char *readOneWord();


int main(int argc, char *argv[]){
    if (argc < 2){
        printf("Give me a number as argument\n");
        return 1;
    }
    
    int numberOfWords = atoi(argv[1]);
    char **words = (char **)malloc(
        numberOfWords * sizeof(char *)
    );
    
    if (NULL == words){
        printf("no memory\n");
        exit(1);
    }
    
    
    for (int i = 0; i < numberOfWords; i++){
        words[i] = readOneWord();
    }
    
    
    for (int i = numberOfWords-1; i >= 0; i--){
        printf("%s\n", words[i]);
    }
    
    /* freeing!!! */
    for (int i = 0; i < numberOfWords; i++){
        free(words[i]);
    }
    free(words);
    
    return 0;
}


char *readOneWord(){
    char buffer[BUFFERSIZE];
    
    scanf("%s", buffer);
    
    int length = strlen(buffer) + 1; /* \0 included */
    
    char *str = (char *)malloc(length * sizeof(char));
    
    if (NULL == str){
        printf("no memory\n");
        exit(1);
    }
    
    for (int i = 0; i < length; i++){
        str[i] = buffer[i];
    }
    
    return str;
}
