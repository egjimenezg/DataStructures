#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#define SIZE 6

void printHeap(HeapEntry*);

int main(){
  /*The array represents the tree:  9 
                                  /   \
                                 11    3
                               /   \   /
                              49   10 1
  */
  long items[SIZE] = {9,11,3,49,10,1};
  int i;

  Heap heap;
  heap.items = (HeapEntry*)malloc(SIZE*sizeof(HeapEntry));
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

  free(heap.items);
  
  return 0;
}

void printHeap(HeapEntry *heap){
  int i;
  for(i=0;i<SIZE;i++)
    printf("%ld ",heap[i]);
  printf("\n");
}
