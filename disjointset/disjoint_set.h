#ifndef _DISJOINTSET_H_
#define _DISJOINTSET_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SET_SIZE 100

typedef struct DisjointSet{
	int parent, rank;
	char* name;
}disjoint_set;

void make_set(const char* s,disjoint_set* ds,bool* set);
int find_set(const char *s,disjoint_set* ds);
void link(const char* a,const char* b,disjoint_set* ds);
bool same_set(const char *a,const char *b,disjoint_set* ds);

#endif