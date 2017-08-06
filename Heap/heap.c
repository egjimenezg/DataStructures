#include <stdio.h>

#define parent(position) ( position > 1 ? (position-1)>>1 : 0)
#define left(position) ( (position<<1)+1 )
#define right(position) ( (position<<1)+2 )
#define SIZE 6

void heapify(int*,int);
void swap(int*,int*);
void buildMaxHeap(int*);
void printHeap(int*);

int main(){
  /*The array represents the tree:  9 
                                  /   \
                                 11    3
                               /   \   /
                              49   10 1
  */
  int heap[SIZE] = {9,11,3,49,10,1};
  buildMaxHeap(heap);
  printHeap(heap);
  /*After the build-heap function the tree keep the max heap property in each 
    subtree with the following structure:  49
                                         /    \
                                        11     3
                                       /  \    / 
                                      9   10  1                                           
  */
  return 0;
}

void heapify(int* heap,int position){
  int leftPosition = left(position);
  int rightPosition = right(position);
  int maxValuePosition;

  if(leftPosition < SIZE && heap[leftPosition] > heap[position])
    maxValuePosition = leftPosition;
  else
    maxValuePosition = position;

  if(rightPosition < SIZE && heap[rightPosition] > heap[maxValuePosition])
    maxValuePosition = rightPosition;

  if(maxValuePosition != position){
    swap(&heap[position],&heap[maxValuePosition]);
    heapify(heap,maxValuePosition);
  }
}

void buildMaxHeap(int* heap){
  int n;

  for(n=((SIZE/2)-1);n>=0;n--)
    heapify(heap,n);

}

void swap(int* positionFrom,int* positionTo){
  int temporalPosition = (*positionFrom); 
  (*positionFrom) = (*positionTo);
  (*positionTo) = temporalPosition; 
}

void printHeap(int *heap){
  int i;
  for(i=0;i<SIZE;i++)
    printf("%d ",heap[i]);
  printf("\n");
}
