//Heap Sorting Algorithms
//Sorting
//Input: an array of N elements of type T
//Output: sorted array of N elements of type T
//Assumptions: > and < must be defined

//Insertion Sort
//Algorithm makes N-1 passes through an array of size N
//For pass p=1 through p=N-1, insertion sort ensures that the elements in positions 0 through p are
//sorted
//Makes use of the fact that elements in positions 0 through p-1 are already sorted
//Idea: each element is inserted into the correct position among preceding elements that have 
//      already been sorted in previous iterations
//Analysis: nested loops, each cna take at most N iterations
//Therefore, O(N^2)
//Worst case: input array elements are in reverse order = O(N^2)
//Best case: elements sorted in correct order = O(N)

//Shell Sort
//Sort elements that are distant first, then sort adjacent elements
//Distance between elements decreases from iteration to iteration
//In final iteration, adjacent elements are sorted
//A sequence of h1, h2, ..., ht of gaps between elements in different iterations of the Shell
//sorting algorithm is called the increment sequence
//Any increment sequence will do as long as ht = 1, the last iteration gap is 1
//After the kth iteration, using increment hk, all elements spaced hk apart are sorted
//A popular choice for sorting:
//  ht = [N/2] and hk = [h subscript (k+1)/2]
//Worst case complexity: O(N^2)
//Average case: determined program to program

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n";
}