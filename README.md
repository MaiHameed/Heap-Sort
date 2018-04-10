# Heap Sort Algorithm in C
  This is an implementation of a heap sort algorithm in C. The intHeap.c file contains the actual implementation, which uses a recursive function maxHeapify() to sort the heap.
## XML Visualization
  After reading in integer inputs and feeding them into a heap tree, the printXML() function within the intHeap.c file will print out a XML visual representation of the binary tree. Shown below is an example of the implementation with the test numbers given in input.txt
```
<node id='12'>
    <node id='45'>
        <node id='34'>
            <node id='65'>
            </node>
            <node id='1'>
            </node>
        </node>
        <node id='21'>
            <node id='8'>
            </node>
            <node id='3'>
            </node>
        </node>
    </node>
    <node id='6'>
        <node id='87'>
            <node id='2'>
            </node>
        </node>
        <node id='67'>
        </node>
    </node>
</node>
```
## Recursion
  Recursive functions were used to help sort the heap tree, as well as deal with the XML visualization!
## Stack Data Structure
  A stack data structure was implemented as a way to push the max element from each maxHeapify into it, as well as print the order in reverse order. Then pop was used to print in the proper min to max order. Below is the same input.txt example with the sorted output
```
87
67
65
45
34
21
12
8
6
3
2
1

1
2
3
6
8
12
21
34
45
65
67
87
```
