#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/// 4. feladat
typedef enum Type {bsc, msc, phd} Type;


typedef struct PhdData {
    double impact_factor;
    int erdos_number;
} PhdDataType;


typedef union ExtraData {
    int no_of_courses;
    double cumulated_creditindex;
    PhdDataType phd_data;
} ExtraDataType;


typedef struct Student {
    int id;
    int age;
    double creditindex;
    Type type; 
    ExtraDataType extra_data;
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
StudentType* init_student(Type type) {
    StudentType* student = malloc(sizeof(StudentType));
    
    if (student == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }

    student->id = rand();
    student->age = rand() % 40;
    student->creditindex = 5 * ((double) rand()) / RAND_MAX;
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

void get_extra_data(StudentType* student, char* ret) {
    Type type = student->type;
 
    switch(type) {
        case bsc:
            sprintf(ret, "no_of_courses=%d",
                student->extra_data.no_of_courses
            );
            break;
        case msc:
            sprintf(ret, "cumulated_creditindex=%f", 
                student->extra_data.cumulated_creditindex
            );
            break;
        case phd:
            sprintf(ret, "erdos_szam=%d",
                student->extra_data.phd_data.erdos_number
            );
            break;
        default:
            perror("Nincs ilyen tipus!");
            exit(1);
    }

}


void print_student(StudentType* student) {
    char ret[50];

    get_extra_data(student, ret);

    printf("<Student id=%d age=%d creditindex=%f type=%s %s>\n",
        student->id,
        student->age,
        student->creditindex,
        get_type_name(student->type),
        ret
    );
}


int main() {
    srand(time(NULL));

    StudentType* student_tomb[3];
    
    StudentType* anna = init_student(bsc);
    StudentType* bela = init_student(msc);
    StudentType* cecil = init_student(phd);

    PhdDataType phd_data = {3.4, 4};

    anna->extra_data.no_of_courses = 3;
    bela->extra_data.cumulated_creditindex = 4.3;
    cecil->extra_data.phd_data = phd_data;

    student_tomb[0] = anna;
    student_tomb[1] = bela;
    student_tomb[2] = cecil;

    print_student(anna);
    print_student(cecil);

    double max_creditindex = get_max_creditindex(student_tomb, 3);

    printf("max_creditindex: %f\n", max_creditindex);

    int i;

    for (i = 0; i < 3; i++) {
        free(student_tomb[i]);
    }

    return 0;
}
