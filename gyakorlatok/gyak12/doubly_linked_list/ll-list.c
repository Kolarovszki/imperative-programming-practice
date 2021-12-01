#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

struct node {
    int val;
    struct node* next;
    struct node* prev;
};

struct list {
    struct node* head;
    int size;
};

list_t create_list() {
    list_t l = malloc(sizeof(struct list));
    l->head = NULL;
    l->size = 0;
    return l;
}

node_t* create_node(int d, node_t* next, node_t* prev) {
    node_t* new_node = malloc(sizeof(node_t));
    if (new_node) {
        new_node->val = d;
        new_node->next = next;
        new_node->prev = prev;
    }
    return new_node;
}

void push(list_t l, int d) {
    node_t* current = l->head;
    
    node_t* new_node = create_node(d, NULL, NULL);
    
    if (current) {
        while(current->next) {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
    } else {
        l->head = new_node;
    }
    l->size++;
}

void insert(list_t l, int i, int d) {
    node_t* current = l->head;
    
    node_t* new_node = create_node(d, NULL, NULL);
    
    if (current) {
        int j = 0;
        while(current->next && j<i) {
            current = current->next;
            j++;
        }
        struct node* prev = current->prev;
        new_node->next = current;
        current->prev = new_node;
        if (prev) {
            prev->next = new_node;
            new_node->prev = prev;
        } else {
            l->head = new_node;
        }
    } else {
        l->head = new_node;
    }
    l->size++;
}

int pop(list_t l) {
    node_t* current = l->head;
    if (current) {
        while(current->next) {
            current = current->next;
        }
        node_t* prev = current->prev;
        if (prev) {
            prev->next = NULL;
        } else {
            l->head = NULL;
        }
        int d = current->val;
        free(current);
        l->size--;
        return d;
    } else {
        exit(1);
    }
}

void delete(list_t l, int i) {
    node_t* current = l->head;
    if (current) {
        int j = 0;
        while(current->next && j<i) {
            current = current->next;
            j++;
        }
        node_t* prev = current->prev;
        if (prev) {
            prev->next = current->next;
            if (current->next) {
                current->next->prev = prev;
            }
        } else if (current) {
            l->head = current->next;
            if (current->next) {
                current->next->prev = NULL;
            }
        } else {
            l->head = NULL;
        }
        free(current);
        l->size--;
    } else {
        exit(1);
    }
}

int get(list_t l, int i) {
    node_t* current = l->head;
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

void print_list(list_t l) {
    node_t* current = l->head;
    while(current) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

int size(list_t l) {
    return l->size;
}