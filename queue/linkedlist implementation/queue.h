#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct node Node;
typedef struct queue Queue;

Queue* newQueue();
bool isEmpty(Queue* q);
void enqueue(Queue* q, int val);
int dequeue(Queue* q);
void printQueue(Queue* q);

#endif