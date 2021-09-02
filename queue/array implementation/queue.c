#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

struct queue{
	int front,back;
	int size;
	int* data;
};

Queue* newQueue(int size){
	Queue* q =(Queue*) malloc(sizeof(Queue));
	q->front = q->back = 0;
	q->size = size;
	q->data = (int*) malloc(sizeof(int)*size);
	return q;
}

bool isEmpty(Queue* q){
	return q->front == q->back;
}

bool isFull(Queue* q){
	return (q->back+1)%q->size == q->front;
}

void enqueue(Queue* q, int val){

	if(isFull(q)){
		printf("queue is full");
		exit(1);
	}

	q->data[q->back] = val;
	q->back = (q->back+1)%q->size;
}
int dequeue(Queue* q){
	if(isEmpty(q)){
		printf("queue is empty");
		exit(1);
	}

	int ret = q->data[q->front];
	q->front = (q->front+1)%q->size;
	return ret;

}
void printQueue(Queue* q){

	if(isEmpty(q)) printf("NULL\n");
	else{
		
		for(int i=q->front;i!=q->back;i++){
			printf("%d ",q->data[i]);
			if(i>=q->size-1) i -= q->size;
		}
		printf("\n");
	}
}