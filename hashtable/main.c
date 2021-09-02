#include "hash.h"

int main(){
	
	symtab ** ht = (symtab**) malloc(TABLE_SIZE*sizeof(symtab*));
	//for(int i=0;i<TABLE_SIZE;i++) ht[i] = NULL;
	insertID("abc",ht);
	insertID("abd",ht);
	insertID("abe",ht);
	insertID("abf",ht);
	insertID("abg",ht);
	printSymTab(ht);

	symtab* ptr=lookup("abf",ht);
	if(ptr)
		printf("%s\n",ptr->name);
	ptr=lookup("abv",ht);
	if(ptr)
		printf("%s\n",ptr->name);
	
	return 0;
}