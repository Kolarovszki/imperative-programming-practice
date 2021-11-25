#include <stdio.h>

enum Type{
    BSc = 1,
    MSc = 2,
    PhD = 3
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

struct StudentDataStruct{
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


typedef struct StudentWithStruct{
    struct StudentDataStruct data;
    double average;
    int id;
    int age;
    Type type;
} StudentWithStruct;

int highestAverageStudent(Student *students, int length);



int main(void){
    printf("sizeof(Student): %lu\n", sizeof(Student));
    printf("sizeof(StudentWithStruct): %lu\n", sizeof(StudentWithStruct));
    
    
    printf("sizeof(union StudentData): %lu\n", sizeof(union StudentData));
    printf("sizeof(struct StudentDataStruct): %lu\n", sizeof(struct StudentDataStruct));
    
    Student students[3];
    
    students[0].id = 2;
    students[0].average = 4.8;
    students[0].age = 19;
    students[0].type = BSc;
    students[0].data.numberOfC = 10;
    
    
    students[1].id = 3;
    students[1].average = 4.7;
    students[1].age = 22;
    students[1].type = MSc;
    students[1].data.corrIndex = 5.4;
    
    
    students[2].id = 5;
    students[2].average = 4.0;
    students[2].age = 25;
    students[2].type = PhD;
    students[2].data.phdData.impactFactor = 3.2;
    students[2].data.phdData.erdosNumber = 6;
    
    int length = sizeof(students) / sizeof(students[0]);
    int highestAverageId = highestAverageStudent(students, length);
    
    printf("id of highest average student: %d\n", highestAverageId);

    return 0;
}


int highestAverageStudent(Student *students, int length){
    if (students){
        int indexWHA = 0;
        for (int i = 1; i < length; i++){
            if (
                students[indexWHA].average
                    <
                students[i].average
            ){
                indexWHA = i;
            }
        
        }
        return students[indexWHA].id;
    }
    return -1;
}
