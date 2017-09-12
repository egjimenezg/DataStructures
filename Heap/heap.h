#define parent(position) ( position > 1 ? (position-1)>>1 : 0)
#define left(position) ( (position<<1)+1 )
#define right(position) ( (position<<1)+2 )
#include <stdio.h>

typedef long HeapEntry;

typedef struct Heap{
  HeapEntry* items; 
  long heapSize;
} Heap;

void heapify(Heap*,long);
void swap(long*,long*);
void buildMaxHeap(Heap*,long);
void heapSort(Heap*,long);
