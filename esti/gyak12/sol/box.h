#ifndef BOX_H
#define BOX_H


struct Box;
typedef struct Box Box;
typedef Box *Box_t;


extern Box_t top;


void printStack(void);
void initialize(void);
int isEmpty(void);
int peek(void);
void push(int weight);
void pop(void);
void copyTopFirst(void);
void copyTop(void);
void release(void);


#endif
