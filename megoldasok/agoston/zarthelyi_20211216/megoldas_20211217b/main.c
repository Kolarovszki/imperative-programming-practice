#include <stdio.h>

#include "function.h"

int main(int argc, char *argv[]){
    if (argc < 2){
        calculateLines(stdin);    
    }else{
        for (int i = 1; i < argc; i++){
            FILE *f = fopen(argv[i], "r");
            if (f){
                calculateLines(f);
                fclose(f);
            }else{
                fprintf(stderr, "File opening was not succesful: %s\n", argv[i]);
            }
        }
    }
    
    return 0;
}
