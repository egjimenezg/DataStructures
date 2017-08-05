#include <stdio.h>

#define parent(position) ( position > 1 ? (position-1)>>1 : 0)
#define left(position) ( (position<<1)+1 )
#define right(position) ( (position<<1)+2 )
#define SIZE 6

int main(){
  /*The array represents the tree:  9 
                                  /   \
                                 11    3
                               /   \   /
                              49   10 1
  */
                  //0|1| 2 |3 |4 |5
  int heap[SIZE] = {9,11,3,49,10,1};

  return 0;
}
