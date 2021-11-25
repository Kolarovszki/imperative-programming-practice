#include <stdio.h>


typedef struct Student{
    double average;
    int id;
    int age;
} Student;

int highestAverageStudent(Student *students, int length);



int main(void){
    Student students[] = {
        {4.8, 3, 19},
        {4.7, 4, 20},
        {4.9, 5, 19},
        {3.0, 6, 22},
        {4.99, 9, 19}
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
