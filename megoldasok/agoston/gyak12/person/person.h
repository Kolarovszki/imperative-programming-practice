#ifndef PERSON_H
#define PERSON_H

#define NAME_LENGTH 30



struct Person{
    char name[NAME_LENGTH];
    int *age;
};

typedef struct Person Person;
typedef Person * Person_t;



#endif

