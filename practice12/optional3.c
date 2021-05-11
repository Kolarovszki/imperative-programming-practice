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
    //int age2 = 40;

    strcpy(p1.name, "Peter");
    
    p1.age = &age1;

    assert(*(p1.age) == age1);
    assert(strcmp(p1.name, "Peter") == 0);
    
    Person p2 = p1;

    assert(*(p2.age) == age1);
    assert(strcmp(p2.name, "Peter") == 0);

    print_person(p1);
    print_person(p2);
    
    *(p1.age) = 40; // Smarter way: p1.age = &age2;

    print_person(p1);
    print_person(p2);
   
    assert(*(p1.age) == 40);
    assert(*(p2.age) == 40);

    return 0;
}
