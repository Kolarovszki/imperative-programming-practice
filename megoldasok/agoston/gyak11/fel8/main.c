#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "student.h"


int main(void){
    srand(time(NULL));
    
    Student *students[10];
    
    students[0] = student_init(BSc);
    students[1] = student_init(BSc);
    students[2] = student_init(BSc);
    students[3] = student_init(BSc);
    students[4] = student_init(MSc);
    students[5] = student_init(MSc);
    students[6] = student_init(MSc);
    students[7] = student_init(MSc);
    students[8] = student_init(PhD);
    students[9] = student_init(PhD);
    
    int length = sizeof(students) / sizeof(students[0]);
    
    for(int i = 0; i < length; i++){
        printStudent(students[i]);
    }
    
    printf("Highest average student id: %d\n",
        highestAverageStudent(students, length));
    
    
    
    for(int i = 0; i < length; i++){
        free(students[i]);
    }

    return 0;
}

