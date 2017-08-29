#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#define SIZE 6

void printHeap(int*);

int main(){
  /*The array represents the tree:  9 
                                  /   \
                                 11    3
                               /   \   /
                              49   10 1
  */
  int items[SIZE] = {9,11,3,49,10,1};
  int i;

  Heap heap;
  heap.items = (int*)malloc(SIZE*sizeof(int));
  for(i=0;i<SIZE;i++)
    heap.items[i] = items[i];

  buildMaxHeap(&heap,SIZE);
  printHeap(heap.items);
  
  /*After the build-heap function is called, the tree keeps the max heap property in each 
    subtree with the following structure:  49
                                         /    \
                                        11     3
                                       /  \    / 
                                      9   10  1                                           
  */
  
  heapSort(&heap,SIZE); 
  printHeap(heap.items);

  /*After applying HeapSort algorithm the items of the heap are ordered (1,3,9,10,11,49)*/
  return 0;
}

void printHeap(int *heap){
  int i;
  for(i=0;i<SIZE;i++)
    printf("%d ",heap[i]);
  printf("\n");
}
