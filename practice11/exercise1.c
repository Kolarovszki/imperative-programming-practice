#include<stdio.h>

// typedef <STRUCT DEF> <TYPE NAME>;

struct Student {
    int id;
    double average;
    int age;
}; // Think of it as a container of variables;

typedef struct Student student_type;


void print_student(student_type student) {

}

int main() {
    student_type student;

    student.id = 1;

    student.average = 1.2;

    student.age = 18;

    printf("%d\n", student.id); 

    return 0;
}
