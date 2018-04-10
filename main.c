#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapSize();
extern void maxHeapify(int); 
extern void printXML(int);
extern void printHeap();
extern int heapDelete();
extern void printStack();

int main(int argc, char * argv[])
{
 	int value, start, i, num=0;
  	while (scanf("%d\n", &value) != EOF) {
    		addHeap(value);
		num++;
	}
	printXML(0);
	printf("\n");
	start = (heapSize()-1)/2;
	//fprintf(stderr, "heapSize() = %d\n", heapSize());
	//fprintf(stderr, "start = %d\n", start);
	for(i = start; i>=0;i--){
		//fprintf(stderr, "i = %d\n", i);
		maxHeapify(i);
	}
	for(i = 0; i<num; i++){
		push(heapDelete());
	}
	printf("\n");
	for(i = 0; i<num; i++){
		printf("%d\n", pop());
	}	
	fprintf(stderr, "heapSize() = %d\n", heapSize());
	printStack();	
  	exit(0);
}
