#include <stdio.h>

enum Type{
    BSc = 1,
    MSc = 2,
    PhD = 3
};

typedef enum Type Type;


typedef struct Student{
    double average;
    int id;
    int age;
    Type type;
} Student;

int highestAverageStudent(Student *students, int length);



int main(void){
    Student students[] = {
        {4.8, 3, 19, BSc},
        {4.7, 4, 20, BSc},
        {4.9, 5, 19, BSc},
        {3.0, 6, 22, BSc},
        {4.0, 7, 24, MSc},
        {3.8, 8, 23, MSc},
        {4.99, 9, 19, BSc}
    };
    
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
