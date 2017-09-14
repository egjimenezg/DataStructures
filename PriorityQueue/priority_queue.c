#include "priority_queue.h"

queue_entry extractMax(Heap* heap){
  if(heap->heapSize < 1){
    perror("The queue is empty");
    return -1;
  }

  queue_entry maxEntry = heap->items[0]; 
  heap->items[0] = heap->items[heap->heapSize-1];
  heap->heapSize -= 1;
  heapify(heap,0); 
  return maxEntry;
}

