#include <stdio.h>

int main(){
    int i;
    i = 19.7;
    printf("float: %d\n", i);

    i = 'a';
    printf("char: %d\n", i);

    i = (10 < 200);
    printf("true bool: %d\n", i);

    i = (10 < 0);
    printf("false bool: %d\n", i);

    i = "text";
    printf("string: %d\n", i);


    return 0;
}
