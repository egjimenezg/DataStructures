#include <stdio.h>

#define parent(position) ( position > 1 ? (position-1)>>1 : 0)
#define left(position) ( (position<<1)+1 )
#define right(position) ( (position<<1)+2 )
#define SIZE 6

void heapify(int*,int);
void swap(int*,int*);

int main(){
  /*The array represents the tree:  9 
                                  /   \
                                 11    3
                               /   \   /
                              49   10 1
  */
                  
  int heap[SIZE] = {9,11,3,49,10,1};
  //                0|1 |2| 3| 4|5 
  return 0;
}

void heapify(int* heap,int position){
  int leftPosition = left(position);
  int rightPosition = right(position);
  int maxValuePosition;

  if(leftPosition < SIZE && heap[leftPosition] > heap[position]){
    maxValuePosition = leftPosition;
  }
  else{
    maxValuePosition = position;
  }

  if(rightPosition < SIZE && heap[rightPosition] > heap[position]){
    maxValuePosition = rightPosition;
  }

  if(maxValuePosition != position){
    swap(&heap[position],&heap[maxValuePosition]);
    heapify(heap,maxValuePosition);
  }
}

void swap(int* positionFrom,int* positionTo){
  int temporalPosition = (*positionFrom); 
  (*positionFrom) = (*positionTo);
  (*positionTo) = temporalPosition; 
}
