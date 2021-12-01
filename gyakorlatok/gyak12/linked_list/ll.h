#ifndef LL_H
#define LL_H

typedef struct node {
    int val;
    struct node* next;
} node_t;

typedef node_t* list;

list create_list();

node_t* create_node(int d, node_t* next);

void push(list* l, int d);

int pop(list* l);

int get(list l, int i);

void print_list(list l);

#endif