#include <stdio.h>

/* wrong implementation */
void foo(){
    static int counter;
    counter = 0;
    counter++;

    printf("foo called %d times, addr: %p\n", counter, (void *)&counter);
}

/* good implementation */
void bar(){
    static int counter = 0;
    counter++;

    printf("bar called %d times, addr: %p\n", counter, (void *)&counter);
}

int main(void){
    foo();
    foo();
    bar();
    bar();
    foo();
    bar();
    foo();
    bar();


    return 0;
}
