/**
 *  The functions in this module implement a Heapdata structure*  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int size = 0, depth = 0;
int *heap; 
void maxHeapify(int);

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
	//fprintf(stderr, "addHeap(%d)\n", thing2add);
	heap[size-1]=thing2add;
}


void swapHeap(int a, int b){
	fprintf(stderr, "swap heap[%d] with heap[%d]\n", a, b);
	int temp = heap[a];
	heap[a] = heap[b];
	heap[b] = temp;
}

int heapDelete(){
	size--;
	swapHeap(0, size);
	maxHeapify(0);
	fprintf(stderr, "size = %d\n", size);
	return heap[size];
}

void printDepth(){
	int i;
	for(i=0; i<depth; i++){
		printf("    ");
	}
}

void printXML(int parent){
	int l = (2*parent)+1;
	int r = (2*parent)+2;

	printDepth();
	printf("<node id='%d'>\n", heap[parent]);
	depth++;
	if(l<size){
		printXML(l);
	}
	if(r<size){
		printXML(r);
	}
	depth--;
	printDepth();
	printf("</node>\n");
}

void printHeap(){
	int i;
	for(i=0; i<size; i++){
		fprintf(stderr, "heap[%d] = %d\n", i, heap[i]);
	}
}


void maxHeapify(int parent)
{	
	//fprintf(stderr, "maxHeapify(%d)\n", parent);
	int l = (2*parent)+1;
	int r = (2*parent)+2;
	int max = parent;
	int level = 0;
		
	if((l < size) && (heap[l] > heap[max])){
		max = l;
	}
	if((r < size) && (heap[r] > heap[max])){
		max = r;
	}
	if(max != parent){
		swapHeap(max, parent);
		level++;
		//fprintf(stderr, "level = %d parent = %d\n\n",level, parent);
		maxHeapify(max);
	}
	//fprintf(stderr, "Reached end of maxHeapify()\n");
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}
