#include <stdio.h>
#include "ll.h"

int main() {
    list lista = create_list();
    push(&lista, 5);
    print_list(lista);
    push(&lista, 10);
    print_list(lista);
    push(&lista, 7);
    print_list(lista);
    printf("0. elem: %d\n", get(lista, 0));
    printf("1. elem: %d\n", get(lista, 1));
    //printf("3. elem: %d\n", get(lista, 3));
    pop(&lista);
    print_list(lista);
    pop(&lista);
    print_list(lista);
    pop(&lista);
    print_list(lista);
    push(&lista, 100);
    print_list(lista);
    return 0;
}
