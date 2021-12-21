#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"




int main(int argc, char *argv[]){
    if (argc == 1){
        filekezeles(stdin);   
    }
    
    for (int i = 1; i < argc; i++){
        FILE *fp;
        fp = fopen(argv[i], "r");
        
        if ( fp == NULL ){
            fprintf(stderr, "File not available\n");
            continue;
        }
        
        filekezeles(fp);
        
        fclose(fp);
    }
    return 0;
}


