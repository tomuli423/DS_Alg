#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void swap(int* a,int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//selection sort: O(n^2), in-place, stable or not according to implementaion
void SelectionSort(int* array, int length){
	for(int i=0;i<length-1;i++){
		int min_index = i;
		
		for(int j=i+1;j<length;j++){
			if(array[j]<array[min_index]){
				min_index=j;
			}
		}
		swap(array+i,array+min_index);
	}
}


//insertion sort: O(n^2), in-place, stable
void InsertionSort(int* array, int length){

	for(int i=1;i<length;i++){
		int j = i-1;
		int inserted = array[i];
		while(inserted < array[j] && j>=0 ){
			array[j+1] = array[j];
			j--;
		}

		array[j+1] = inserted;
	}

}

//bubble sort: O(n^2), in-place, stable
void BubbleSort(int* array, int length){
	for(int i=length-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(array[j]>array[j+1]) 
				swap(array+j,array+j+1);
		}
	}
}


void MaxHeapify(int* array, int length, int i){
	int parent = i;
	int left = 2*i+1, right = 2*i+2;

	if(left<length && array[left]>array[parent]) parent = left;
	if(right<length && array[right]>array[parent]) parent = right;

	if(parent!=i){
		swap(array+parent,array+i);
		MaxHeapify(array, length, parent);
	}

}

void BuildMaxHeap(int* array, int length){
	for(int i = length/2 - 1 ; i >= 0; i--)
		MaxHeapify(array, length, i);
}

void HeapSort(int* array, int length){
	for(int i = length-1; i>0; i--){
		swap(array,array+i);
		MaxHeapify(array,i,0);
	}
}

void Merge(int* array, int front, int mid, int end){
		int s1 = front, e1 = mid;
		int s2 = mid+1, e2 = end;
		int c = 0;
		int tmp[end-front+1];
		while(s1 <= e1 && s2 <= e2)
			tmp[c++] = array[s1]<=array[s2] ? array[s1++] : array[s2++];

		while(s1 <= e1)
			tmp[c++] = array[s1++];

		while(s2 <= e2)
			tmp[c++] = array[s2++];

		c = 0;
		for(int i=front;i<=end;i++)
			array[i] = tmp[c++];	
}

void MergeSort(int* array, int front, int end){
	if(front < end){
		int mid = front+ (end-front)/2;
		MergeSort(array,front,mid);
		MergeSort(array,mid+1,end);
		Merge(array,front,mid,end);
	}
}

int Partition(int* array,int front, int end){
	int pivot = array[end];
	int i = front;

	for(int j=front;j<end;j++){
		if(array[j]<pivot){
			swap(array+i,array+j);
			i++;
		}
	}

	swap(array+i,array+end);

	return i;
}
void QuickSort(int* array, int front, int end){
	if(front<end){
		int pivot = Partition(array, front, end);
		QuickSort(array,front,pivot-1);
		QuickSort(array,pivot+1,end);
	}
}