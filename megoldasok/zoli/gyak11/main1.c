#include <stdio.h>

struct Student {
    int id;
    int age;
    double creditindex;
};



int main() {
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(double): %lu\n", sizeof(double));
    printf("sizeof(StudentType): %lu\n", sizeof(struct Student));
    return 0;
}
