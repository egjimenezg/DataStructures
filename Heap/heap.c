#include "heap.h"

void heapify(Heap* heap,long position){
  
  long maxValuePosition = position;
  long leftPosition;
  long rightPosition;

  do{
    swap(&(heap->items[position]),&(heap->items[maxValuePosition]));
    position = maxValuePosition;
    leftPosition = left(position);
    rightPosition = right(position);

    if(leftPosition < heap->heapSize && (heap->items[leftPosition]) > (heap->items[position]))
      maxValuePosition = leftPosition;
    else
      maxValuePosition = position;

    if(rightPosition < heap->heapSize && (heap->items[rightPosition]) > (heap->items[maxValuePosition]))
      maxValuePosition = rightPosition;
  }
  while(maxValuePosition != position);
    
}

void buildMaxHeap(Heap* heap,long size){
  long n;
  heap->heapSize = size;

  for(n=((heap->heapSize/2)-1);n>=0;n--)
    heapify(heap,n);
}

void heapSort(Heap* heap,long size){
  int i=0;
  buildMaxHeap(heap,size);
  for(i=size-1;i>=1;i--){
    swap(&heap->items[0],&heap->items[i]);
    heap->heapSize = heap->heapSize-1;
    heapify(heap,0);
  }
}

void swap(long* positionFrom,long* positionTo){
  int temporalPosition = (*positionFrom); 
  (*positionFrom) = (*positionTo);
  (*positionTo) = temporalPosition; 
}
