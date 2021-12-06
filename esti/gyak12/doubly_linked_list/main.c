#include <stdio.h>
#include "ll.h"

int main() {
    list_t lista = create_list();
    push(lista, 5);
    print_list(lista);
    push(lista, 10);
    print_list(lista);
    push(lista, 7);
    print_list(lista);
    printf("0. elem: %d\n", get(lista, 0));
    printf("1. elem: %d\n", get(lista, 1));
    printf("Size: %d\n", size(lista));
    pop(lista);
    print_list(lista);
    pop(lista);
    print_list(lista);
    pop(lista);
    print_list(lista);
    push(lista, 100);
    print_list(lista);
    push(lista, 101);
    print_list(lista);
    printf("Size: %d\n", size(lista));
    insert(lista, 0, 1000);
    print_list(lista);
    delete(lista, 0);
    print_list(lista);
    insert(lista, 1, 123);
    print_list(lista);
    delete(lista, 1);
    print_list(lista);
    delete(lista, 1);
    print_list(lista);
    return 0;
}