#include <stdio.h>


int global_variable = 1;



int main() {
    printf("%d\n", global_variable);

    global_variable = 2;

    printf("%d\n", global_variable);
    
    return 0;
}
