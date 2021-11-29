#include <stdlib.h>
#include <stdio.h>

#define SIZE 20



enum Type{
    BSc = 0,
    MSc = 1,
    PhD = 2
};
typedef enum Type Type;

union Data{
    int number;
    double corrIndex;
    char favLetter;
};


struct Student{
    int id;
    int age;
    double average;
    Type type;
    union Data data;
};
typedef struct Student Student;




/* same as above
typedef struct Student{
    int id;
    int age;
    double average;
    Type type;
} Student;
*/



Student *student_init(Type type);
void print(Student *student);
Student *highestAverage(Student **students);

int main(void){

    Student *students[SIZE];
    for (int i = 0; i < SIZE; i++){
        students[i] = student_init(rand() % 3);
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



Student *student_init(Type type){
    static int counter = 0;
    Student *p = (Student *)malloc(sizeof(Student));
    
    if (p){
        (*p).id = counter++;
        /* p->id = counter++; same as above*/
        p->age = rand() % 20 + 18;
        p->average = (rand() % 41) / 10.0 + 1.0;
        p->type = type;
        
        
        switch (type){
            case BSc:
                p->data.number = rand() % 10;
                break;
            case MSc:
                p->data.corrIndex = (rand() % 41) / 10.0 + 1.0;
                break;
            case PhD:
                p->data.favLetter = rand() % 26 + 'A';
                break;
        }
    
        return p;
    }
    
    exit(1);
}


void print(Student *student){
    printf("%2d : age: %d, average: %f, t: %d", 
        student->id,
        student->age,
        student->average,
        student->type
    );
    switch (student->type){
        case BSc:
            printf(" numb: %d\n", student->data.number);
            break;
        case MSc:
            printf(" corrIndex: %f\n", student->data.corrIndex);
            break;
        case PhD:
            printf(" favLetter: %c\n", student->data.favLetter);
            break;
    }
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
