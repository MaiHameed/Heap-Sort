#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapSize();

int main(int argc, char * argv[])
{
  int value;
  while (scanf("%d\n", &value) != EOF) {
	//fprintf(stderr, "READING INPUT: %d\n", value);
    	addHeap(value);
  }
	fprintf(stderr, "heapSize() = %d\n", heapSize());	
  exit(0);
}
