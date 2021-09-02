#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main(){

	Queue* q = newQueue();

	for(int i=0; i<10;i++){
		enqueue(q,i);
	}

	printQueue(q);

	for(int i=0; i<10;i++){
		printf("%d ",dequeue(q));
	}
	printf("\n");

	printQueue(q);

	return 0;
}