#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[128];
    int* age;
} Person;


void printPerson(Person* p) {
    printf("%s, %d éves.\n", p->name, *(p->age));
}


int main() {
    int age = 19;
    Person p1 = {"Lajos", &age};

    Person p2;

    strcpy(p2.name, p1.name);
    int new_age = *(p1.age);
    p2.age = &new_age;

    printPerson(&p1);
    printPerson(&p2);

    *(p1.age) = 20;

    printPerson(&p1);
    printPerson(&p2);
    
    return 0;
}
