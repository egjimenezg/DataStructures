#include "heap.h"

void heapify(int* heap,int position,int size){
  
  int maxValuePosition = position;

  do{
    swap(&heap[position],&heap[maxValuePosition]);
    position += maxValuePosition - position;
    int leftPosition = left(position);
    int rightPosition = right(position);

    if(leftPosition < size && heap[leftPosition] > heap[position])
      maxValuePosition = leftPosition;
    else
      maxValuePosition = position;

    if(rightPosition < size && heap[rightPosition] > heap[maxValuePosition])
      maxValuePosition = rightPosition;
  }
  while(maxValuePosition != position);
    
}

void buildMaxHeap(int* heap,int size){
  int n;

  for(n=((size/2)-1);n>=0;n--)
    heapify(heap,n,size);
}

void swap(int* positionFrom,int* positionTo){
  int temporalPosition = (*positionFrom); 
  (*positionFrom) = (*positionTo);
  (*positionTo) = temporalPosition; 
}
