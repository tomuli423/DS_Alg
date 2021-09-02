#ifndef _STACK_H_
#define _STACK_H_

typedef struct st Stack;

Stack* newStack(int size);
bool isEmpty(Stack* st);
bool isFull(Stack* st);
int peek(Stack* st);
void push(Stack* st, int val);
int pop(Stack* st);
void printStack(Stack* st);

#endif