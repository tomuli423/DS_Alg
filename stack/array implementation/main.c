#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main(){

	Stack* stack = newStack(10);


	for(int i=0; i<10;i++){
		push(stack,i);
	}

	printStack(stack);

	for(int i=0; i<10;i++){
		printf("%d ",peek(stack));
	}
	printf("\n");

	printStack(stack);

	for(int i=0; i<10;i++){
		printf("%d ",pop(stack));
	}
	printf("\n");


	printStack(stack);

	return 0;
}