#include <stdio.h>
#include <stdbool.h>





int main() { 
    int local_variable = 42;

    if (true) {  // Stackframe begins!
        int branch_variable = 3;

        local_variable = 52;
    }  // Stackframe ends, variables are deleted!

    printf("%d\n", local_variable);

    return 0;
}
