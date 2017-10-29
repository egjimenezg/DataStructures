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

void incrementValue(Heap *heap,long position,queue_entry value){
  if(value < heap->items[position]){
    perror("The new value is smaller than the old one");
    return;
  }

  heap->items[position] = value;

  while(position > 0 && heap->items[parent(position)] < heap->items[position]){
    swap(&(heap->items[position]),&(heap->items[parent(position)]));
    position = parent(position);
  }

}
