//Splay Tree
//Guarantee that any M consecutive operations starting form an empty tree take at most
//O(MlogN)
//A single operation may still take: O(N)

//Basic idea: After a node is accessed, it is pushed to the root by a series of AVL rotations
//Assumes: When a node is accessed, it is likely to be accessed again soon

//A splay tree is a self-adjusting binary search tree with the additional property that
//recently accessed elements are quick to access again
//Ensures that the amortized cost of all operations is O(logN)
//Amortized running time: The amortized complexity is O(f(N)), if a sequence of M operations has
//the worst-case running time of O(Mf(N)

//Deletion: 
//  -Access the node => node at the root (it has TL and TR subtrees)
//  -Delete the node
//  -Find the largest element in TL, and rotatie it to the root, then make TR the right child
//   of the new root
//Splay Trees:
//  -Easier to program than AVL trees (no height information to maintain)
//  -Faster to program in practice

