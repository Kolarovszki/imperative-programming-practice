#ifndef BOX_H
#define BOX_H

struct Box;
typedef struct Box * Box_t;


struct Box{
    int weight;
    Box_t next; /* same as : struct Box * next; */
};

typedef struct Box Box;


Box_t top;


void initialize(void);
int isEmpty(void);
int peek(void);
void push(int weight);
int pop(void);
void copyTopFields(void);
void copyTop(void);


#endif

