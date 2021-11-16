#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc == 3){
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        
        printf("Sum: %d\n", a + b);
    }else{
        printf("Give me two parameters\n");
    }

    return 0;
}
