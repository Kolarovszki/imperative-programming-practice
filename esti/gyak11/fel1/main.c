
#include <stdio.h>

struct Student{
    int id;
    int age;
    double average;
};
typedef struct Student Student;

int main(void){

    printf("sizeof Student: %ld\n", sizeof(Student));

    return 0;
}
