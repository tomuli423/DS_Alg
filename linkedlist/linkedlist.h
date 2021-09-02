#ifndef _LINKEDLISHT_H_
#define _LINKEDLISHT_H_

typedef struct node Node;
typedef struct list List;

List* newList(void);
void insertFront(List* list, int data);
void insertBack(List* list, int data);
void deleteNode(List* list, int data);
void printList(List* list);
void reverseList(List* list);
void freeList(List* list);

#endif