#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main(){

	Queue* q = newQueue(10);

	for(int i=0; i<1;i++){
		enqueue(q,i);
		enqueue(q,i);

		printQueue(q);

		dequeue(q);
		dequeue(q);

	}

	for(int i=0; i<9;i++){
		enqueue(q,i);
	}
	printQueue(q);

	/*for(int i=0; i<9;i++){
		printf("%d ",dequeue(q));
	}
	printf("\n");

	printQueue(q);*/

	return 0;
}