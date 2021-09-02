#ifndef _STACK_H_
#define _STACK_H_

typedef struct node Node;
typedef struct stack Stack;

Stack* newStack();
bool isEmpty(Stack* st);
int peek(Stack* st);
void push(Stack* st, int val);
int pop(Stack* st);
void printStack(Stack* st);

#endif