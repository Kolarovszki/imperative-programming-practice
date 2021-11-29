#include <stdio.h>
#include <stdlib.h>


/// 4. feladat
typedef enum Type {bsc, msc, phd} Type;


typedef struct Student {
    int id;
    int age;
    double creditindex;
    Type type; 
} StudentType;


double get_max_creditindex(StudentType** array, int d) {
    int i;

    double max_creditindex = array[0]->creditindex;

    for (i = 0; i < d; i++){
        StudentType* current_student = array[i];

        if (current_student->creditindex > max_creditindex) {
            max_creditindex = current_student->creditindex;
        }
    }

    return max_creditindex;
}

/// Free me! (3. feladat)
StudentType* init_student(int id, int age, double creditindex, Type type) {
    StudentType* student = malloc(sizeof(StudentType));
    
    if (student == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }

    student->id = id;
    student->age = age;
    student->creditindex = creditindex;
    student->type = type;

    return student;
}


char* get_type_name(Type type) {
    switch(type) {
        case bsc:
            return "bsc";
        case msc:
            return "msc";
        case phd:
            return "phd";
        default:
            perror("Nincs ilyen tipus!");
            exit(1);
    }
}


void print_student(StudentType* student) {
    printf("<Student id=%d age=%d creditindex=%f type=%s>\n",
        student->id,
        student->age,
        student->creditindex,
        get_type_name(student->type)
    );
}


int main() {
    StudentType* student_tomb[3];
    
    StudentType* anna = init_student(1, 19, 4.5, bsc);
    StudentType* bela = init_student(2, 18, 4.4, msc);
    StudentType* cecil = init_student(3, 24, 4.6, phd);

    student_tomb[0] = anna;
    student_tomb[1] = bela;
    student_tomb[2] = cecil;

    print_student(anna);

    double max_creditindex = get_max_creditindex(student_tomb, 3);

    printf("max_creditindex: %f\n", max_creditindex);

    int i;

    for (i = 0; i < 3; i++) {
        free(student_tomb[i]);
    }

    return 0;
}
