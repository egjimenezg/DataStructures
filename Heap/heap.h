#define parent(position) ( position > 1 ? (position-1)>>1 : 0)
#define left(position) ( (position<<1)+1 )
#define right(position) ( (position<<1)+2 )
#include <stdio.h>

typedef struct Heap{
  int* items; 
  int heapSize;
} Heap;

void heapify(Heap*,int);
void swap(int*,int*);
void buildMaxHeap(Heap*,int);
void heapSort(Heap*,int);
