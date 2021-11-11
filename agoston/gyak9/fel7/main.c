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
    
    int wordCount = 0;
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
        
        /*printf("%d: |%s|\n", i, words[i]);*/
        if (words[i] == NULL){
            break;
        }else{
            wordCount++;
        }
        
    }
    
    
    for (int i = wordCount-1; i >= 0; i--){
        printf("%s\n", words[i]);
    }
    
    /* freeing!!! */
    for (int i = 0; i < wordCount; i++){
        free(words[i]);
    }
    free(words);
    
    return 0;
}


char *readOneWord(){
    char buffer[BUFFERSIZE];
    
    char *retVal = fgets(buffer, BUFFERSIZE, stdin);
    
    if (NULL == retVal){
        return NULL;
    }
    
    int length = strlen(buffer);
    
    char *str = (char *)malloc(length * sizeof(char));
    
    if (NULL == str){
        printf("no memory\n");
        exit(1);
    }
    
    for (int i = 0; i < length; i++){
        str[i] = buffer[i];
    }
    str[length-1] = '\0';
    
    return str;
}
