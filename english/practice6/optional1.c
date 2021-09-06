#include <stdio.h>
#include <stdlib.h>


int main() {
    
    FILE *fp;

    fp = fopen("some-other-file.txt", "w");

    fprintf(fp, "Hello World!\n");

    int var_to_stop_execution;

    scanf("%d", &var_to_stop_execution); // WE'RE HERE
   
    fprintf(fp, "Hello again!\n");

    fclose(fp);

    return 0;
}
