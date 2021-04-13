#include <stdio.h>
#include <stdbool.h>


int global_variable = 1;

void func() {
    int local_variable = 42;
}


int main() {
    printf("%d\n", global_variable);

    global_variable = 2;

    printf("%d\n", global_variable);

    func();
    
    // Here local_variable is already deleted!

    printf("%d\n", local_variable);


    if (true) {
        int branch_variable = 3;
    }

    printf("%d\n", branch_variable);

    return 0;
}
