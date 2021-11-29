#include <stdio.h>


typedef struct Student {
    int id;
    int age;
    double creditindex;
} StudentType;


double get_max_creditindex(StudentType* array, int d) {
    int i;

    double max_creditindex = array[0].creditindex;

    for (i = 0; i < d; i++){
        StudentType current_student = array[i];

        if (current_student.creditindex > max_creditindex) {
            max_creditindex = current_student.creditindex;
        }
    }

    return max_creditindex;
}


int main() {
    StudentType student_tomb[3];

    StudentType anna = {1, 19, 4.5};
    StudentType bela = {2, 18, 4.4};
    StudentType cecil = {3, 20, 4.6};

    student_tomb[0] = anna;
    student_tomb[1] = bela;
    student_tomb[2] = cecil;

    double max_creditindex = get_max_creditindex(student_tomb, 3);

    printf("max_creditindex: %f\n", max_creditindex);

    return 0;
}
