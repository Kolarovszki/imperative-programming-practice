#include <stdio.h>

int main(int argc, char **argv){
    if (2 == argc){
        FILE *fp;
        int temp;
        
        fp = fopen(argv[1], "r");
        /* NULL != fp */
        if (fp){
            int sum = 0;
            while (fscanf(fp, "%d", &temp) > 0){
                sum += temp;
            }
            printf("Sum: %d\n", sum);
            
            fclose(fp);
        }
    }else{
        printf("Give me a filename\n");
    }

    return 0;
}
