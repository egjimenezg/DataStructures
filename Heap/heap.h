#define parent(position) ( position > 1 ? (position-1)>>1 : 0)
#define left(position) ( (position<<1)+1 )
#define right(position) ( (position<<1)+2 )

void heapify(int*,int,int);
void swap(int*,int*);
void buildMaxHeap(int*,int);
void sort(int*,int);
