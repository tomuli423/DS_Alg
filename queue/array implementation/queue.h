#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct queue Queue;

Queue* newQueue(int size);
bool isEmpty(Queue* q);
bool isFull(Queue* q);
void enqueue(Queue* q, int val);
int dequeue(Queue* q);
void printQueue(Queue* q);

#endif