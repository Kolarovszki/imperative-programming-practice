#include <stdlib.h>
#include <stdio.h>
#include "ll.h"


list create_list() {
    return NULL;
}

node_t* create_node(int d, node_t* next) {
    node_t* new_node = malloc(sizeof(node_t));
    if (new_node) {
        new_node->val = d;
        new_node->next = next;
    }
    return new_node;
}

void push(list* l, int d) {
    list current = *l;
    
    node_t* new_node = create_node(d, NULL);
    
    if (current) {
        while(current->next) {
            current = current->next;
        }
        current->next = new_node;
    } else {
        *l = new_node;
    }
}

int pop(list* l) {
    list current = *l;
    if (current) {
        list prev = NULL;
        while(current->next) {
            prev = current;
            current = current->next;
        }
        if (prev) {
            prev->next = NULL;
        } else {
            *l = NULL;
        }
        int d = current->val;
        free(current);
        return d;
    } else {
        exit(1);
    }
}

int get(list l, int i) {
    list current = l;
    int c = 0;
    while(current && current->next && c<i) {
        current = current->next;
        c++;
    }
    if (c==i) {
        return current->val;
    } else {
        exit(1);
    }
}

void print_list(list l) {
    list current = l;
    while(current) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}
