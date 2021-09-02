#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct node{
	int data;
	struct node* next;
};

struct stack{
	Node* top;
};

Node* newNode(int data);
Node* newNode(int data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

Stack* newStack(){
	Stack* st =(Stack*) malloc(sizeof(Stack));
	st->top = NULL;
	return st;
}

bool isEmpty(Stack* st){
	return st->top == NULL;
}

int peek(Stack* st){
	if(isEmpty(st)){
		printf("stack is empty");
		exit(1);
	}

	return st->top->data;
}

void push(Stack* st, int val){
	Node* node = newNode(val);
	node->next = st->top;
	st->top = node;
}

int pop(Stack* st){
	if(isEmpty(st)){
		printf("stack is empty");
		exit(1);
	}

	Node* deleted = st->top;
	int ret = peek(st);
	st->top = st->top->next;
	free(deleted);
	return ret;
}

void printStack(Stack* st){
	Node* node = st->top;

	if(!node) printf("NULL");
	while(node){
		printf("%d ", node->data);
		node=node->next;
	}
	printf("\n");
}