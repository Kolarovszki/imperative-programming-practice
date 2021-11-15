#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 21

char *readWord(void);

int main(int argc, char *argv[]){
    if (argc < 2){
        printf("give me a number\n");
        exit(1);
    }
    
    int number = atoi(argv[1]);
    char **words;
    words = (char **)malloc(number * sizeof(char *));
    
    for (int i = 0; i < number; i++)
        words[i] = readWord();
    
    
    for (int i = 0; i < number; i++){
        printf("%s\n", words[number - i - 1]);
    }
    
    for (int i = 0; i < number; i++){
        free(words[i]);
    }
    free(words);
    

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

