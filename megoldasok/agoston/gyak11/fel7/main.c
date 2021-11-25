#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
