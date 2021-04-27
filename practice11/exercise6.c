#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>

// typedef <STRUCT/ENUM DEF> <TYPE NAME>;

typedef enum Type {BSc, MSc, PhD} Type;  // For naming things!

typedef union Extra {
    int courses_taken; // 4
    int impact_factor;  // 4
    double index;  // 8
} Extra;

typedef struct Student {
    int id;
    double average;
    int age;
    Type type;
    Extra extra;
} Student; // Think of it as a container of variables;

Student* student_init(Type type) {
    Student* random_student = malloc(sizeof(Student));

    random_student->id = rand() % 100;

    // rand() will be between 0 and RAND_MAX
    // rand() / RAND_MAX will be between 0 and 1
    random_student->average = 5.0 * (rand() / RAND_MAX);

    random_student->age = rand() % 100;

    random_student->type = type;
    
    switch (type) {
        case BSc:
            random_student->extra.courses_taken = rand() % 50;
            break;
        case MSc:
            random_student->extra.index = 5.0 * (rand() / RAND_MAX);
            break;
        case PhD:
            random_student->extra.impact_factor = rand() % 10;
            break;
        default:
            break;
    }
    return random_student;
}


int main() {
    int length = 2;

    srand(time(NULL));

    Student** student_database = malloc(length * sizeof(Student*));
    
    int i;

    for (i = 0; i < length; ++i) {
        student_database[i] = student_init(BSc);
    }
 
    printf(
        "Joe's courses_taken: %d\n",
        student_database[0]->extra.courses_taken
    );

    // Memory deallocation
    
    for (i = 0; i < length; ++i) {
        free(student_database[i]);
    }

    free(student_database);

    return 0;
}

// RULE OF THUMB: For every malloc, there should be a free!
