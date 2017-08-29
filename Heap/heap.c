#include "heap.h"

void heapify(Heap* heap,int position){
  
  int maxValuePosition = position;

  do{
    swap(&(heap->items[position]),&(heap->items[maxValuePosition]));
    position += maxValuePosition - position;
    int leftPosition = left(position);
    int rightPosition = right(position);

    if(leftPosition < heap->heapSize && (heap->items[leftPosition]) > (heap->items[position]))
      maxValuePosition = leftPosition;
    else
      maxValuePosition = position;

    if(rightPosition < heap->heapSize && (heap->items[rightPosition]) > (heap->items[maxValuePosition]))
      maxValuePosition = rightPosition;
  }
  while(maxValuePosition != position);
    
}

void buildMaxHeap(Heap* heap,int size){
  int n;
  heap->heapSize = size;

  for(n=((heap->heapSize/2)-1);n>=0;n--)
    heapify(heap,n);
}

void swap(int* positionFrom,int* positionTo){
  int temporalPosition = (*positionFrom); 
  (*positionFrom) = (*positionTo);
  (*positionTo) = temporalPosition; 
}
