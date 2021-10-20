#include <stdio.h>

extern int count;
extern int count_static;

void print_out() {
    printf("print_count function printing count: %d\n", count);
    //printf("and static count: %d", count_static);
}