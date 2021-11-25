#include "student.h"
#include <stdio.h>
#include <stdlib.h>




Student *student_init(Type t){
    static int highestId = 1;
    
    Student *p = (Student *)malloc(sizeof(Student));
    
    if (p){
        (*p).age = 20 + rand()%12;
        (*p).average = 1.0 + (rand() % 40) / 10.0;
        p->type = t;
        p->id = highestId++;
        switch(t){
            case BSc :
                p->data.numberOfC = rand() % 8 + 2;
                break;
            case MSc :
                p->data.corrIndex =
                    rand() % 100 / 10.0;
                break;
            case PhD :
                p->data.phdData.impactFactor =
                    rand() % 100 / 10.0;
                p->data.phdData.erdosNumber =
                    rand() % 10 + 1;
                break;
            default :
                printf("Give me proper type of student\n");
                break;
        };
    }
    
    
    return p;
}


void printStudent(Student *student){
    printf("Id: %d, age: %d, average : %f\n", 
        student->id, student->age, student->average);
    printf("Type: %d\n", student->type);
    switch(student->type){
        case BSc:
            printf("numberOfC: %d\n",
                student->data.numberOfC);
            break;
        case MSc:
            printf("corrIndex: %f\n",
                student->data.corrIndex);
            break;
        case PhD:
            printf("impactFactor: %f\n",
                student->data.phdData.impactFactor);
            printf("erdosNumber: %d\n",
                student->data.phdData.erdosNumber);
            break;
        default:
            printf("Error\n");
            break;          
    };
}



int highestAverageStudent(Student **students, int length){
    if (students){
        float maxAverage = 0.0;
        int indexWHA = -1;
        
        for (int i = 0; i < length; i++){
            if (students[i] &&
                maxAverage
                    <
                students[i]->average
            ){
                indexWHA = i;
                maxAverage = students[i]->average;
            }
        
        }
        return students[indexWHA]->id;
    }
    return -1;
}
