#include <stdio.h>


typedef struct Student{
    double average;
    int id;
    int age;
} Student;



int main(void){
    int s = sizeof(Student);
    printf("sizeof(Student) : %d\n", s);
    s = sizeof(int);
    printf("sizeof(int) : %d\n", s);
    s = sizeof(double);
    printf("sizeof(double) : %d\n", s);
    

    return 0;
}
