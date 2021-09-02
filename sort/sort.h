#ifndef _SORT_H_
#define _SORT_H_


void swap(int* a ,int* b);

void SelectionSort(int* array, int length);

void InsertionSort(int* array, int length);

void BubbleSort(int* array, int length);

void MaxHeapify(int* array, int length, int i);
void BuildMaxHeap(int* array, int length);
void HeapSort(int* array, int length);

void Merge(int* array, int front, int mid, int end);
void MergeSort(int* array, int front, int end);

int Partition(int* array,int front, int end);
void QuickSort(int* array, int front, int end);


#endif