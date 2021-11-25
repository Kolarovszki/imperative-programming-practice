#include <stdio.h>


struct Student{
    double average;
    int id;
    int age;
};


struct Student2{
    int id;
    double average;
    int age;
};

typedef struct Student Student;
typedef struct Student2 Student2;


int main(void){
    int s = sizeof(Student);
    printf("sizeof(Student) : %d\n", s);
    s = sizeof(Student2);
    printf("sizeof(Student2) : %d\n", s);
    s = sizeof(int);
    printf("sizeof(int) : %d\n", s);
    s = sizeof(double);
    printf("sizeof(double) : %d\n", s);
    

    return 0;
}
