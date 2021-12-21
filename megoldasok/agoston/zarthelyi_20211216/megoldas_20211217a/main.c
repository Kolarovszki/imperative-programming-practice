#include <stdio.h>

#include "func.h"

int main(int argc, char *argv[]){
    if (argc == 1){
        calcLines(stdin);
    }else{
        for (int i = 1; i < argc; ++i){
            FILE *fp = fopen(argv[i], "r");

            if (fp){            
                calcLines(fp);
                
                fclose(fp);
            }else{
                fprintf(stderr, "File is not available: %s\n", argv[i]);
                /* continue; not necessary*/
            }
        }
    }

    return 0;
}
