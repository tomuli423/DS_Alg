#include "disjoint_set.h"

int main(){

	disjoint_set ds[SET_SIZE];
	bool set[SET_SIZE]={};

	make_set("abc",ds,set);
	make_set("abd",ds,set);

	if(same_set("abc","abd",ds)) puts("same set!");
	else puts("different set!");

	link("abc","abd",ds);
	if(same_set("abc","abd",ds)) puts("same set!");
	else puts("different set!");

	return 0;
}