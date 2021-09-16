#include <stdio.h>

int main(){
    int i;

    i = 2.7;
    printf("Double : %d\n", i);

    i = 'q';
    printf("Char : %d\n", i);

    i = (23 > 12);
    printf("Bool (true) : %d\n", i);
    i = (23 < 12);
    printf("Bool (false) : %d\n", i);

    i = "alma";
    printf("String : %d\n", i);

    return 0;
}
