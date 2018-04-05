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


void swapHeap(int a, int b){
	fprintf(stderr, "swap heap[%d] with heap[%d]\n", a, b);
	int temp = heap[a];
	heap[a] = heap[b];
	heap[b] = temp;
}


void printHeap(){
	int i;
	fprintf(stderr, "HEAP ARRAY\n");
	for(i = 0; i<size; i++){
		fprintf(stderr, "heap[%d]=%d\n", i, heap[i]);
	}
	fprintf(stderr, "\n");	
}


void maxHeapify(int parent)
{	
	fprintf(stderr, "maxHeapify(%d)\n", parent);
	int l = (2*parent)+1;
	int r = (2*parent)+2;
	int max = parent;
	int level = 0;
	while(l < size && r < size){	
		if(heap[l] > heap[max]){
			max = l;
		}
		if(heap[r] > heap[max]){
			max = r;
		}
		if(max != parent){
			swapHeap(max, parent);
			level++;
			fprintf(stderr, "level = %d parent = %d\n\n",level, parent);
			maxHeapify(max);
		}
	}
	fprintf(stderr, "Reached end of maxHeapify()\n");
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}
