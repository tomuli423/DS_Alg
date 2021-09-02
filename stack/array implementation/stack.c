#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct st{
	int top;
	int size;
	int *data;
};

Stack* newStack(int size){
	Stack* st =(Stack*)malloc(sizeof(Stack));
	st->top = -1;
	st->size = size - 1;
	st->data = (int *) malloc(sizeof(int)*size);
	return st;
}

bool isEmpty(Stack* st){
	return st->top == -1;
}

bool isFull(Stack* st){
	return st->top == st->size;
}

int peek(Stack* st){
	if(isEmpty(st)){
		printf("stack is empty\n");
		exit(1);
	}
	
	return st->data[st->top];
	
}

void push(Stack* st, int val){
	if(isFull(st)){
		printf("stack is full\n");
		exit(1);
	}
	else{
		st->data[st->top+1] = val;
		st->top++;
	}
}

int pop(Stack* st){
	if(isEmpty(st)){
		printf("stack is empty\n");
		exit(1);
	}
	
	return st->data[st->top--];
	
}

void printStack(Stack* st){
	if(isEmpty(st)) printf("NULL\n");
	else{
		for(int i=0; i<=st->top; i++)
			printf("%d ", st->data[i]);
	}
	printf("\n");
}