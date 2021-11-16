#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    
    /* print the number of the  */
    /* command line arguments   */
    printf("Number of args: %d\n", argc);
    
    /* print the command line   */
    /* arguments                */
    for (i = 0; i < argc; ++i){
        /* i, i'th argument     */
        printf("%d : %s\n", i, argv[i]);
    }    

    return 0;
}
