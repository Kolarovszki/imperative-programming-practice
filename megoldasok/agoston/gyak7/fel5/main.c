#include <stdio.h>

int main(void){
    int i1 = 1;
    {
        int i2 = 2;
        {
            int i3 = 3;
            {
                int i4 = 4;
                printf("i1: %d,", i1);
                printf("i2: %d,", i2);
                printf("i3: %d,", i3);
                printf("i4: %d\n", i4);
            }
            printf("i1: %d,", i1);
            printf("i2: %d,", i2);
            printf("i3: %d\n", i3);
        }    
        printf("i1: %d,", i1);
        printf("i2: %d\n", i2);
    }
    printf("i1: %d\n", i1);

    int i = 1;
    {
        int i = 2;
        {
            int i = 3;
            {
                int i = 4;
                printf("i: %d\n", i);
            }
            printf("i: %d\n", i);
        }
        printf("i: %d\n", i);
    }
    printf("i: %d\n", i);

    return 0;
}
