#ifndef _LL_H
#define _LL_H

typedef struct node node_t;

typedef struct list* list_t;

list_t create_list();

void push(list_t l, int d);

int pop(list_t l);

int get(list_t l, int i);

void print_list(list_t l);

void insert(list_t l, int i, int d);

void delete(list_t l, int i);

int size(list_t l);

#endif