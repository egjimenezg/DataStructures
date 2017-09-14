#include "priority_queue.h"
#include <stdio.h>
#include <stdlib.h>

void printQueue(Heap);

int main(){
  int i;
  Heap queue;
  long n;
  HeapEntry entry;

  scanf("%ld",&n);
  queue.items = (HeapEntry*)malloc(n*sizeof(HeapEntry));

  for(i=0;i<n;i++){
    scanf("%ld",&entry);
    queue.items[i] = entry;
  }

  buildMaxHeap(&queue,n);
  printQueue(queue);
  queue_entry max = extractMax(&queue);
  printf("Max entry in the PriorityQueue %ld\n",max);
  printQueue(queue);

  free(queue.items);
  return 0;
}

void printQueue(Heap heap){
  int i;
  for(i=0;i<heap.heapSize;i++)
    printf("%ld ",heap.items[i]);
  printf("\n");
}
