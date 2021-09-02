#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(){

	int size = 50;
	int array[size];


	for(int i=0; i<size;i++){
		array[i]=100-2*i;
	}

	printf("unordered: ");
	for(int i=0; i<size;i++){
		printf("%d ",array[i]);
	}
	printf("\n");

	//BubbleSort(array,size);
	QuickSort(array,0,size-1);

	printf("ordered: ");
	for(int i=0; i<size;i++){
		printf("%d ",array[i]);
	}
	printf("\n");

	return 0;
}