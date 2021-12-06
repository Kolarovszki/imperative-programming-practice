#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

struct node {
    int val;
};

struct list {
    struct node* store;
    int size;
};

list_t create_list() {
    list_t l;
    l = malloc(sizeof(struct list));
    l->store = malloc(sizeof(node_t)*1024);
    l->size = 0;
    return l;
}

void push(list_t l, int d) {
    l->store[l->size].val = d;
    l->size++;
}

void insert(list_t l, int i, int d) {
    node_t* current = &l->store[i];
    int j = i;
    int prev = d;
    do {
        int temp = current->val;
        current->val = prev;
        prev = temp;
        j++;
        current++;
    } while(j<=l->size);
    current->val = prev;
    l->size++;
}

int pop(list_t l) {
    return l->store[l->size--].val;
}

void delete(list_t l, int i) {
    node_t* current = &l->store[i];
    if (current) {
        int j = i;
        while(j<l->size) {
            current->val = (current+1)->val;
            current++;
            j++;            
        }
        l->size--;
    }
}

int get(list_t l, int i) {
    if (l->size>i) {
        return l->store[i].val;
    } else {
        exit(1);
    }
}

void print_list(list_t l) {
    node_t* current = l->store;
    int i=0;
    while(i < l->size) {
        printf("%d ", current->val);
        current++;
        i++;
    }
    printf("\n");
}

int size(list_t l) {
    return l->size;
}