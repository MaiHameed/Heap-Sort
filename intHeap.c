/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int size = 0;
int *heap; 

int heapDelete()
{
  return 0;  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	if(!size){
		heap = malloc((size+1)*sizeof(int));
	}	
	size++;
	heap = realloc(heap, (size+1)*sizeof(int)); 
	fprintf(stderr, "addHeap(%d)\n", thing2add);
	heap[size-1]=thing2add;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}
