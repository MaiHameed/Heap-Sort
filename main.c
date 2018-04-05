#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapSize();
extern void maxHeapify(int); 
extern void printHeap();

int main(int argc, char * argv[])
{
  int value, start, i;
  while (scanf("%d\n", &value) != EOF) {
	//fprintf(stderr, "READING INPUT: %d\n", value);
    	addHeap(value);
  }
	printHeap();
	start = (heapSize()-1)/2;
	fprintf(stderr, "heapSize() = %d\n", heapSize());
	fprintf(stderr, "start = %d\n", start);
	for(i = start; i>0;i--){
		fprintf(stderr, "i = %d\n", i);
		maxHeapify(i);
	}	
	fprintf(stderr, "heapSize() = %d\n", heapSize());	
  exit(0);
}
