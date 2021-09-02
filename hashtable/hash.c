#include "hash.h"

unsigned long hash(char *str)
{
    unsigned long hash = 5381;

    while (*str)
        hash = ((hash << 5) + hash) + (int)*str++;

    return hash % TABLE_SIZE;
}

symtab* lookup(char *name,symtab ** hash_table){
	int hash_key;
	symtab* symptr;
	if(!name)
		return NULL;

	hash_key=hash(name);
	symptr=hash_table[hash_key];

	while(symptr){
		if(!(strcmp(name,symptr->name)))
			return symptr;
		symptr=symptr->next;
	}
	return NULL;
}


void insertID(char *name,symtab ** hash_table){
	int hash_key;
	symtab* symptr=(symtab*)malloc(sizeof(symtab));	
	strcpy(symptr->name,name);

	hash_key=hash(name);
	symtab* old=hash_table[hash_key];
	
	if(!old){
		hash_table[hash_key] = symptr;
		symptr->next = NULL;
	}
	else{
		symptr->next = old;
		hash_table[hash_key] = symptr;	
	}
	
}

void printSymTab(symtab** hash_table){
	for (int i=0; i<TABLE_SIZE; i++)
    {

        symtab* symptr;
		symptr = hash_table[i];

		while (symptr){
	    	printf("%s\n",symptr->name);
	    	symptr = symptr->next;
		}
    }
}