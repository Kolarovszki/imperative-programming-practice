#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// typedef <STRUCT/ENUM DEF> <TYPE NAME>;

enum Type {BSc=1, MSc=2, PhD=42};

typedef enum Type Type;

struct Student {
    int id;
    double average;
    int age;
    char name[50];
}; // Think of it as a container of variables;

typedef struct Student Student;



int id_of_student_with_highest_average(
    Student* student_database,
    int d
) {
   int i;

   double maximum_average = 0.0;
   
   int student_id;

   for (i = 0; i < d; ++i) {
        Student current_student = student_database[i];

        if (current_student.average > maximum_average) {
            maximum_average = current_student.average;
            student_id = current_student.id;
        }
   }

    return student_id;
}


int main() {
    Student student_database[2];

    Student joe;
    joe.id = 1;
    joe.average = 1.5;
    joe.age = 18;
    strcpy(joe.name, "Some Joe");
    student_database[0] = joe; // student_database[0]  is a Student
                               // 'joe' is a Student as well

    Student mary;
    mary.id = 2;
    mary.average = 1.4;
    mary.age = 19;
    strcpy(mary.name, "Some Mary");
    student_database[1] = mary;

    printf("Mary's name: %s\n", student_database[1].name);
    
    printf(
        "Student with highest average: %d\n",
        id_of_student_with_highest_average(
            student_database,
            2
        )
    );

    printf("BSc: %d, MSc: %d, PHD: %d.\n", BSc, MSc, PhD);

    return 0;
}
