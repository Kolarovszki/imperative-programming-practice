#include <stdio.h>


int main() {

    {
        int a = 1;

        {
            int b = 2;

            {
                int c = 3
                
                printf("c: %d\n", c);
                printf("b: %d\n", b);
                printf("a: %d\n", a);
            }

            printf("c: %d\n", c);
            printf("b: %d\n", b);
            printf("a: %d\n", a);
        }
        printf("c: %d\n", c);
        printf("b: %d\n", b);
        printf("a: %d\n", a);
    }

    printf("c: %d\n", c);
    printf("b: %d\n", b);
    printf("a: %d\n", a);

    return 0;
}

