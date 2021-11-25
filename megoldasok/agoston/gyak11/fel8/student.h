#ifndef STUDENT_H
#define STUDENT_H


enum Type{
    BSc = 1,
    MSc,
    PhD
};

typedef enum Type Type;

typedef struct PhDdata {
    double impactFactor;
    int erdosNumber;
} PhDdata;

union StudentData{
    int numberOfC;
    double corrIndex;
    PhDdata phdData;
};


typedef struct Student{
    union StudentData data;
    double average;
    int id;
    int age;
    Type type;
} Student;



Student *student_init(Type t);
void printStudent(Student *student);
int highestAverageStudent(Student **students, int length);


#endif /* STUDENT_H */
