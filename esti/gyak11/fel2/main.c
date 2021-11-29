#include <stdlib.h>
#include <stdio.h>

#define SIZE 20

struct Student{
    int id;
    int age;
    double average;
};
typedef struct Student Student;

Student *student_init(void);
void print(Student *student);
Student *highestAverage(Student **students);

int main(void){

    Student *students[SIZE];
    for (int i = 0; i < SIZE; i++){
        students[i] = student_init();
    }

    for (int i = 0; i < SIZE; i++){
        print(students[i]);
    }
    
    printf("Highest average:\n");
    print(highestAverage(students));

    for (int i = 0; i < SIZE; i++){
        free(students[i]);
    }

    return 0;
}



Student *student_init(void){
    static int counter = 0;
    Student *p = (Student *)malloc(sizeof(Student));
    
    if (p){
        (*p).id = counter++;
        /* p->id = counter++; same as above*/
        p->age = rand() % 20 + 18;
        p->average = (rand() % 41) / 10.0 + 1.0;
    
        return p;
    }
    
    exit(1);
}


void print(Student *student){
    printf("%2d : age: %d, average: %f\n", 
        student->id,
        student->age,
        student->average
    );
}

Student *highestAverage(Student **students){
    Student *p = students[0];
    for (int i = 1; i < SIZE; ++i){
        if (p->average < students[i]->average){
            p = students[i];
        }
    }
    
    return p;
}
