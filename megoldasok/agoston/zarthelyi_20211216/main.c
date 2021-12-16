#include <stdio.h>

#include "functions.h"


int main(int argc, char *argv[]){
    if (argc < 2){
        /* without any command lines arguments provided we handle stdin */
        countLines(stdin);
    }else{
        for (int argumentCounter = 1; argumentCounter < argc; ++argumentCounter){
            FILE *fp;
            /* trying to open current file */            
            fp = fopen(argv[argumentCounter], "r");

            if (fp){
                printf("File: %s\n", argv[argumentCounter]);
                /* handle current file */
                countLines(fp);
                
                /* close file */
                fclose(fp);
            }else{
                /* if file can not be opened, print error message */
                fprintf(stderr, "File not available: %s\n", argv[argumentCounter]);
            }
        }
    }
}
