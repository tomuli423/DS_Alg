#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node{
	int data;
	struct node* next;
};

struct list{
	Node* head;
};

Node* newNode(int data);
Node* newNode(int data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

List* newList(void){
	List* list = (List*)malloc(sizeof(List));
	list->head = NULL;
	return list;
}

void insertFront(List* list, int data){
	Node *node = newNode(data);
	node->next = list->head;
	list->head = node;
}
void insertBack(List* list, int data){
	if(!list->head){
		list->head = newNode(data);
	}
	else{
		Node* node = list->head;
		while(node->next){
			node = node->next;
		}
		node->next =newNode(data);
	}
}
void deleteNode(List* list, int data){
	Node* node = list->head;
	Node* prev = node;
	while(node){
		if(node->data == data){
			if(node == list->head){
				list->head = node->next;
			}
			else{
				prev->next=node->next;
			}
			free(node);
			return;
		}
		prev = node;
		node = node->next;
	}
}

void printList(List* list){
	Node* node = list->head;
	while(node){
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}
void reverseList(List* list){
	Node* node = list->head,*prev = NULL,*next;
	while(node){
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	list->head = prev;
}

void freeList(List* list){
	Node* node = list->head;
	Node* prev = node;

	while(node){
		prev = node;
		node = node -> next;
		free(prev);
	}

	free(list);
}





