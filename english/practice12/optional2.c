#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef struct Person {
    char name[30];
    int* age;
} Person;

int main() {
    Person p1;
    
    int age1 = 80;

    strcpy(p1.name, "Peter");
    
    p1.age = &age1;

    assert(*(p1.age) == age1);
    assert(strcmp(p1.name, "Peter") == 0);
    
    Person p2 = p1;

    assert(*(p2.age) == age1);
    assert(strcmp(p2.name, "Peter") == 0);

    return 0;
}
