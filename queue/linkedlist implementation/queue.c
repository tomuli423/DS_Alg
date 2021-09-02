#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

struct node{
	int data;
	struct node* next;
};

struct queue{
	Node* front,* back;
};

Node* newNode(int data);
Node* newNode(int data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

Queue* newQueue(){
	Queue* q =(Queue*) malloc(sizeof(Queue));
	q->front = q->back = NULL;
	return q;
}

bool isEmpty(Queue* q){
	return q->front == NULL;
}

void enqueue(Queue* q, int val){
	Node* node = newNode(val);

	if(isEmpty(q)) q->front = q->back = node;
	else{
		q->back->next = node;
		q->back = node;
	}
}
int dequeue(Queue* q){
	if(isEmpty(q)){
		printf("queue is empty");
		exit(1);
	}

	Node* deleted = q->front;
	int ret = deleted->data;
	if(q->front == q->back){
		q->back = NULL;
	}
	q->front = deleted->next;

	free(deleted);
	return ret;

}
void printQueue(Queue* q){

	if(isEmpty(q)) printf("NULL\n");
	else{
		Node* node = q->front;
		while(node){
			printf("%d ", node->data);
			node = node->next;
		}
		printf("\n");
	}
}