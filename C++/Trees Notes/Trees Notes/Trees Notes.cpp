#include <iostream>

using namespace std;

//Linked list: linear access time to a node => O(N)
//A flexible data structure is needed for which the runtime of all operations is => O(logN)
//This gives us Binary Search Trees

//Tree: collection of nodes
//A nonempty tree consists of:
//  -the rood node: r
//  -zero or more nonempty (sub)trees T1, T2, ..., Tk, the roots of which are connected with an edge to r
//r is the parent of the root of each subtree
//each subtree is a child of r

//An N-node tree has N-1 edges
//  -each edge connects a node to its parent, every node except the root has 1 parent
//Leaves: nodes with no children
//Siblings: nodes with the same parent
//Path from n1 to nk: a sequence of nodes n1, n2, ..., nk, such that ni is the parent of ni+1, 1<=i<k
//In a tree there is exactly one path from the root to each node
//Path length = the number of edges on the path

//Depth of node ni = length of the path from the root to ni
//Depth of root = 0
//Height of ni = length of the longest path from ni, to a leaf node
//Height of all leaves = 0
//Height of the tree = height of the root
//n1 is an ancestor of n2, and n2 is a descendant of n1, if there is a path from n1 to n2
//If n1 != n2, then n1 is a proper ancestor of n2, and n2 is a proper descendant of n1

//Implementation of Trees:
//  Implementation 1: each node has a link to each child of the node besides its data => complex, as
//                    each node can have a variable number of children
//  Implementation 2: keep children of each node in a linked list of tree nodes

//Starting implementation
struct TreeNode {
    int element;
    TreeNode* firstChild;
    TreeNode* nextSibling;
};

//A binary tree: a tree where no node can have more than 2 children
//Average depth of binary tree: O(N/2)
//Average depth of binary search tree: O(logN)
//Maximum depth = N-1

//Starting binary tree implementation
struct BinaryNode {
    int element;
    BinaryNode* left;
    BinaryNode* right;
};

//Preorder Traversal: do work on each node before visiting its children
//Example: list a directory in a hierarchical file system
/*
template <class Elem>
void preorder(BinNode<elem>* subroot) {
    if (subroot == NULL) return; //Empty
    visit(subroot);
    preorder(subroot->left);
    preorder(subroot->right);
}
*/

//Postorder traversal: do work on each node after visiting its children
//Example: calculate the size of a directory

//Inorder traversal: visit the left subtree, then do work on the node, then visit the right subtree

//Tree Traversals: print the content of a binary search tree in sorted order
//  -ordering information: left < element < right
/*
void printTree(ostream& out = cout) const
{
    if (isEmpty())
        cout << “Empty tree” << endl;
    else
        printTree(root, out);
}
//Internal method 
void printTree(BinaryNode* t, ostream& out) const
{
    if (t != NULL)
    {
        printTree(t->left, out);
        cout << t->element << endl;
        printTree(t->right, out);
    }
}
*/
//Tree traversals: compute the height of a tree node
//  -need to know height of subtrees first
//  =>post-order traversal

//Binary Search Tree
//Binary Tree with a Search Tree Property
//A Binary Tree: no node can have more than 2 children
//Search Tree Property:
//  For every node X in the tree:
//      -the values of all the data items in the left subtree are smaller
//       than the value of the data item in X, and
//      -the values of all the data items in the right subtree are larger
//       than the value of the data itme in X

//General Structure of Tree Traversal Algorithms
//*Driver: starts the recursion at the root
//*Recursive function:
//  doSomethingWithANode(BinaryNode* node) {
//      if (node != NULL) {
//          //process the left sub-tree
//          1. doSomethingWithANode(node->left);
//          2. doSomethingWithANode(node->right);
//          3. doSomethingWithANodeData(node->data);
//      }
//  }

//Printing a BST in sorted order
//  Ordered: left < element < right
/*
void printTree( ostream & out = cout ) const
{
if( isEmpty( ) )
cout << “Empty tree” << endl;
else
printTree( root, out );
}
//Internal method
void printTree(BinaryNode* t, ostream& out) const
{
    if (t != NULL)
    {
        printTree(t->left, out);
        cout << t->element << endl;
        printTree(t->right, out);
    }
}
*/

//Computing the height of a tree node
//  Need to know height of left and right roots of subtrees first => post-order traversal
/*
int height( BinaryNode *t)
{
if( t == NULL )
return -1;
else
return 1 + max( height(t -> left), height( t ->right ));
}
*/

//Expression Trees
//Prefix and Postfix expressions can be represented with binary trees
//  leaves <-> operands
//  internal nodes <-> operators
//To construct and expression tree:
//  -Read one symbol at a time
//  -If the read symbol is an operand, create a one-node tree and push a pointer to it onto a stack
//  -If the read symbol is an operator, then pop two pointers (T1 and T2) from a stack and form a new tree
//   (root=operator; left=T1; right=T2). A pointer to the root of this new tree is pushed onto the stack

//Binary Tree Methods:
//contains Method:
//Returns true, if x is found in the tree
//findMin method:
//Finds the smallest item in a subtree t, returns the node containing the smallest item
//findMax method:
//Finds the largest item in a subtree t, returns the node containing the largest item
//insert Method:
//  -x: item to insert
//  -t: new node that roots the tree
//Then set the new root
//remove Operation/Method:
//Delete a node with 1 child, or, remove 4: bypass the node being deleted by adjusting the edge from its parent
//Delete a node with 2 children, or, remove 2: replace the deleted node's data with the smallest number in the right
//                                             subtree and delete the node with the smallest number
//operator= and clone:
//Creates a deep copy of the binary search tree

//AVL Tree: a Binary Search Tree with a balancing condition
//This ensures that the tree heigh (the root node height) is O(logN)
//The condition: for every node, the height of the left and right subtrees can differ by at most 1
//Height information must be kept in the node structure
//Upper bound on the height of an AVL tree of N nodes: 1.44logt(N+2)-0.328=O(logN)
//Tree operations => O(logN)
//The insertion method can possibly violate the AVL property. The AVL tree can then be restored by the rotation operation

//AVL Tree Insertion:
//Insertion possibilities:
//  1. An insertion into the left subtree of the left child of x
//  2. An insertion into the right subtree of the left child of x
//  3. An insertion into the left subtree of the right child of x
//  4. An insertion into the right subtree of the right child of x
//1 and 4, same with 2 and 3, are mirror image symmetries
//1 and 4, insertion occurs on the outside, a single rotation is needed
//2 and 3, insertion occurs on the inside, a double rotation is needed

int main()
{
    
}
