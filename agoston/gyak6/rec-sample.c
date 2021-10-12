#include <stdio.h>

int rec(int v) {
    if (v<100) {
        rec(v+1);
    } else {
        return v;
    }
}

int main() {
    printf("%d", rec(0));
    return 0;
}