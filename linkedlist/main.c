#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
	
	List* list = newList();

	for(int i = 0; i < 10;i++)
		insertBack(list,i);

	printList(list);

	for(int i = 0; i < 10;i++)
		insertFront(list,i);

	printList(list);

	for(int i = 0; i < 10;i++)
		deleteNode(list,i);

	printList(list);

	reverseList(list);

	printList(list);

	freeList(list);

	return 0;
}