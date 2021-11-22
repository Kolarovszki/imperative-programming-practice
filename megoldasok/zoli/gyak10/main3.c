#include <stdio.h>

#define as_string(a) #a


int main() {
    int szam = 4;

    printf("Output: %s\n", as_string(szam));

    return 0;
}
