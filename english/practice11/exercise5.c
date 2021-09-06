#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// typedef <STRUCT/ENUM DEF> <TYPE NAME>;

enum Type {BSc, MSc, PhD};  // For naming things!

typedef enum Type Type;

typedef union Extra {
    int courses_taken; // 4
    int impact_factor;  // 4
    double index;  // 8
} Extra;

struct Student {
    int id;
    double average;
    int age;
    char name[50];
    Type type;
    Extra extra;
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
    joe.type = BSc;
    joe.extra.courses_taken = 5;
    joe.extra.impact_factor = 2.5;
    strcpy(joe.name, "Some Joe");
    student_database[0] = joe; // student_database[0]  is a Student
                               // 'joe' is a Student as well

    Student mary;
    mary.id = 2;
    mary.average = 1.4;
    mary.age = 19;
    mary.type = PhD;
    strcpy(mary.name, "Some Mary");
    student_database[1] = mary;

    printf(
        "Joe's courses_taken: %d\n",
        student_database[0].extra.courses_taken
    );

    printf("Size of union Extra: %u\n", sizeof(Extra));
    printf("Size of double: %u\n", sizeof(double));

    return 0;
}
