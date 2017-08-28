#include <stdio.h>
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
  int heap[SIZE] = {9,11,3,49,10,1};
  buildMaxHeap(heap,SIZE);
  printHeap(heap);
  /*After the build-heap function is called, the tree keeps the max heap property in each 
    subtree with the following structure:  49
                                         /    \
                                        11     3
                                       /  \    / 
                                      9   10  1                                           
  */
  return 0;
}

void printHeap(int *heap){
  int i;
  for(i=0;i<SIZE;i++)
    printf("%d ",heap[i]);
  printf("\n");
}
