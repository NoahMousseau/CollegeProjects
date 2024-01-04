//Heaps and Queues

//Priority Queues and Heaps
//Problem: Scheduling processes in a multi-user system
//Solution 1: Use queues, but shorter jobs take the same wait time as if it were a longer job
//Solution 2: Prioritize shorter jobs: Run the shortest job first, then the next shortest, etc.
//This is called a Priority Queue
//Key Operations:
//  -insert
//  -deleteMin => finds, returns, and removes the smallest element from the priority queue

//Implementation 1: Linked list
//  -insert: inserts at the front, O(1)
//  -deleteMin: traverses list, O(N)
//Too expensive resource cost

//Implementation 2: BST
//  -insert and deleteMin, O(logN)
//Removing the min can cause an unbalanced tree and degrade performance
//Can also use AVL trees, but they support operations that are not required

//Binary Heap
//Properties:
//  -Structure property
//  -Heap-order property
//A binary heap is a complete binary tree, in which the tree is filled save for the last level which is filled left to right
//A complete tree of height h has between 2^h and 2^h+1 - 1 nodes => height => O(logN)
//Requires an estimate of the maximum heap size

//Heap Order Property:
//The data in X is smaller than or equal to the data in all the decendants of X. In a min-heap for every node X => the 
//data in the parent of X is smaller than or equal to the data in X, with the exception of the root
//Thus, the smallest element in a min-heap is always the root, and findMin => O(1)

//insert
//  -Create a hole in the next available location
//  -If X can be placed without violating the heap order, place X
//  -Otherwise, move the hole's parent into the hole
//  -Continue until X can be placed in the hole
//Percolate up strategy

//DeleteMin
//  -Creates a hole at the root, the min
//  -Move the last element in the heap (X)
//  -If X can be placed in the hole, place it
//  -Otherwise, slide the smaller of the hole's children into the hole, pushing the hole down one level
//  -Continue until X can be placed into the hole
//Percolate down strategy

//Other Heap operations:
//decreaseKey(p, d)
//  -Lowers the value of the data item at position p by a positive amount d
//  -Restore the heap-order
//increaseKey(p, d)
//  -Increases the value of the data item at position p by a positive amount d
//  -Restore the heap-order
//remove(p)
//  -Remove the node at position p
//  -decreaseK(p, ==) then deleteMin()
//buildHeap
//  -Place N items into an empty heap
//Solution 1: N successive insert operations => O(NlogN)
//Solution 2: Place N items into heap in any order, then use percolateDown(i) => O(N)
//Thus, runtime is O(N)
//== is two comparisons, one to find smaller child, one to compare smaller child with node
//Max == is the sum of the heights of all nodes in the heap => O(N)

//Theorem: For the perfect binary tree of height h containing 2^h+1 - 1 nodes, the sum of the 
//         heights of the nodes is 2^h+1 - 1 - (h + 1)

//Applications: Determine the k-th largest number from a set of N numbers
//Solution 1: 
//  -read the N numbers into an array
//  -sort the array in decreasing order
//      * O(NlogN) or O(N^2)
//  -return element in position k
//Solution 2:
//  -read the first k numbers into an array
//  -sort the array in decreasing order O(klogk)
//  -smallest of the k elements is in the k-th position
//  -read each remaining element one by one
//  -If(new element < the k-th element) then ignore it, else remove the k-th element from the array, place the new element
//   in the correct place among k-1 remaining elements
//  -return the element in the k-th position
//  -O(N*k) and if k = N/2 or greater => O(N^2)
//Solution 3:
//  -finding the k-th largest element in N involves using buildHeap to contruct a max-heap and performing
//   k deleteMax operations
//  -read the N elements into an array
//  -apply the buildHeap algorithm to this array to build a max-heap: O(N)
//  -perform k deleteMax operations: O(klogN)
//Total complexity: O(N + klogN) = O(N)

#include <iostream>
using namespace std;
int main()
{
    
}