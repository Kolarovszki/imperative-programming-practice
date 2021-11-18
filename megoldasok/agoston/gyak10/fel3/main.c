#include <stdio.h>


//#define PRINT(i) printf("%d\n", i)
#define PRINT(x) printf("%s\n", #x)

int main(void){
    PRINT(13);
    int i = 19;
    PRINT(i);
    PRINT('c');
    PRINT("feri bacsi");

    return 0;
}
