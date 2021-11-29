#include <stdio.h>

typedef struct Student {
    int id;
    int age;
    double creditindex;
} StudentType;



int main() {
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(double): %lu\n", sizeof(double));
    printf("sizeof(StudentType): %lu\n", sizeof(StudentType));
    return 0;
}
