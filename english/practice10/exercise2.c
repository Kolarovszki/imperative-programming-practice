#include <stdio.h>

#define STRINGIFY(x) (#x)  // #: Stringizing operator


int main() {
    printf("%s\n", STRINGIFY(other_number));
    return 0;
}
