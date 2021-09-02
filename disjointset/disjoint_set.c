#include "disjoint_set.h"

unsigned long hash2(const char *str)
{
    unsigned long hash = 0;

    while (*str)
        hash = ((hash << 3) + hash) + (int)*str++;

    return (hash & (SET_SIZE-1));
}

unsigned long hash(const char *str)
{
    unsigned long hash = 5381;

    while (*str)
        hash = ((hash << 5) + hash) + (int)*str++;

    return (hash & (SET_SIZE-1));
}

void make_set(const char* s,disjoint_set* ds,bool* set){
	int hash_key = hash(s);
	while(set[hash_key]){
		if(!strcmp(s,ds[hash_key].name)) return;
		hash_key += hash2(s);
		hash_key = (hash_key & (SET_SIZE-1));
	}
	ds[hash_key].parent = hash_key;
	ds[hash_key].rank = 1;
	ds[hash_key].name = malloc(100);
	strcpy(ds[hash_key].name,s);
	set[hash_key] = true;
}

int find(int hash_key, disjoint_set* ds){
	if(ds[hash_key].parent != hash_key)
		ds[hash_key].parent = find(ds[hash_key].parent,ds);
	return ds[hash_key].parent;
}
int find_set(const char* s,disjoint_set* ds){
	int hash_key = hash(s);
	while(strcmp(s,ds[hash_key].name) != 0){
		hash_key += hash2(s);
		hash_key = (hash_key & (SET_SIZE-1)); 
	}

	return find(hash_key,ds);
}
void link(const char* a,const char* b,disjoint_set* ds){
	if(!strcmp(a,b)) return;
	int na = find_set(a,ds), nb = find_set(b,ds);
	if(na == nb) return;
	if(ds[na].rank>ds[nb].rank)
		ds[nb].parent = ds[na].parent;
	else
		ds[na].parent = ds[nb].parent;
	if(ds[na].parent == ds[nb].parent) ds[nb].rank++;
}
bool same_set(const char *a,const char *b,disjoint_set* ds){
	return find_set(a,ds)==find_set(b,ds);
}








