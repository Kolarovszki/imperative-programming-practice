#include <stdio.h>

void static_func() {
    int static var = 0;  // Almost global: global for this function
    ++var;

    // Use static variables instead of globals, if possible!

    printf("%d\n", var);
}





int main() {
    static_func();
    static_func();
    static_func();
    static_func();
    static_func();
    static_func();
    static_func();


    return 0;
}
