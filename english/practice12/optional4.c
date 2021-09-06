#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef struct Person {
    char name[30];
    int* age;
} Person;


void print_person(Person person) {
    printf(
        "Name: %s, Age: %d\n",
        person.name,
        *(person.age)
    );
}

int main() {
    Person p1;
    
    int age1 = 80;

    strcpy(p1.name, "Peter");
    
    p1.age = &age1;

    assert(*(p1.age) == age1);
    assert(strcmp(p1.name, "Peter") == 0);
   
    // Deep copy
    Person p2;
    strcpy(p2.name, p1.name);
    int temp = *(p1.age);
    p2.age = &temp;

    // Changing person1
    *(p1.age) = 40;

    assert(*(p1.age) == 40);
    assert(*(p2.age) == 80);

    return 0;
}
