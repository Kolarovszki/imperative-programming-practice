#include <stdio.h>
#include <stdlib.h>

#include "reverse.h"


int main(int argc, char* argv[]) {
    FILE* fp;
    int i;
    
    if (argc == 1) {
        fp = stdin;
        reverse(fp);
    }

    for (i = 1; i < argc; ++i) {
        char* filename = argv[i];

        fp = fopen(filename, "r");

        if (fp == NULL) {
            printf("No such file exists!\n");
            continue;
        }

        reverse(fp);
        fclose(fp);
    }

    return 0;
}
