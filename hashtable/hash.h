#ifndef _HASH_H_
#define _HASH_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

struct symtab{
	char name[101];
	struct symtab *next;
};
typedef struct symtab symtab;

symtab* lookup(char *name,symtab ** hash_table);
void insertID(char *name,symtab ** hash_table);
void printSymTab(symtab** hash_table);

#endif