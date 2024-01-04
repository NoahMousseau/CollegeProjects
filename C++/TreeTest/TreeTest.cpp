#include <iostream>
#include <vector>

//Class declaration
template <typename DataType>
class BinaryTree {
public:
	//Constructor
	BinaryTree();
	//Destructor
	~BinaryTree();
	//Clear
	void Clear();
	//Add node
	void addNode(DataType value);
	//Display tree
	void showTree();
	//If empty
	bool isEmpty();
	
private:
	class TreeNode {
	public:
		//Constructor
		TreeNode(int elem) : dataItem(elem), left(nullptr), right(nullptr) {}
		//Data members
		int dataItem;
		//Pointers
		TreeNode* left;
		TreeNode* right;
	};
	//Private helper methods
	void clearHelper(TreeNode* p);
	TreeNode* insertNode(TreeNode* node, DataType data);
	void showTreeHelper(TreeNode* p, int level);
	//Root node
	TreeNode* root;
};

//Class constructor
template <typename DataType>
BinaryTree<DataType>::BinaryTree() {
	root = nullptr;
}
//Class destructor
template <typename DataType>
BinaryTree<DataType>::~BinaryTree() {
	Clear();
}
//Class clear function
template <typename DataType>
void BinaryTree<DataType>::Clear() {
	clearHelper(root);
	root = nullptr;
}
//Clear helper function
template <typename DataType>
void BinaryTree<DataType>::clearHelper(TreeNode* p) {
	if (p != nullptr) {
		clearHelper(p->left);
		clearHelper(p->right);
		delete p;
	}
}
//Insert node function
template <typename DataType>
typename BinaryTree<DataType>::TreeNode* BinaryTree<DataType>::insertNode(TreeNode* node, DataType data) {
	//If first node in tree
	if (node == nullptr) {
		return new TreeNode(data);
	}
	//If node data less than above node
	if (data < node->dataItem) {
		node->left = insertNode(node->left, data);
	}
	//If node data greater than above node
	else if (data > node->dataItem) {
		node->right = insertNode(node->right, data);
	}
	return node;
}
//Add node function
template <typename DataType>
void BinaryTree<DataType>::addNode(DataType data) {
	root = insertNode(root, data);
}
//isEmpty function
template <typename DataType>
bool BinaryTree<DataType>::isEmpty() {
	if (root == nullptr) {
		return true;
	}
	else {
		return false;
	}
}
//Show tree function
template <typename DataType>
void BinaryTree<DataType>::showTree() {
	if (isEmpty()) {
		std::cout << "Tree is empty" << std::endl;
	}
	else {
		std::cout << "Binary Tree:" << std::endl;
		showTreeHelper(root, 0);
		std::cout << std::endl;
	}
}
//Show tree helper function
template <typename DataType>
void BinaryTree<DataType>::showTreeHelper(TreeNode* p, int level) {
	if (p != nullptr) {
		showTreeHelper(p->right, level + 1); // Print right subtree with '*' indicator
		for (int i = 0; i < level; ++i) {
			std::cout << "\t"; // Add tabs for indentation based on the level of the node
		}
		std::cout << "<" << p->dataItem << std::endl; // Print the current node with relationship indicator
		showTreeHelper(p->left, level + 1); // Print left subtree with '+' indicator
	}
}

int main() {
	//Create binary tree object
	BinaryTree<int> binaryTree;
	//While loop continue criteria
	int loopContinue = 1;
	//Menu and user interaction
	while (loopContinue == 1) {
		//Action menu
		std::cout << "Actions:" << std::endl;
		std::cout << "1: Add node" << std::endl;
		std::cout << "2: " << std::endl;
		std::cout << "3: " << std::endl;
		//User input action
		std::cout << "Input action number: ";
		int action;
		std::cin >> action;
		//Switch statement for action taken
		switch (action) {
		case 1:
			//Add node and value to tree
			int temp;
			std::cout << "Input value to add to tree: ";
			std::cin >> temp;
			binaryTree.addNode(temp);
			break;
		case 2:

			break;
		case 3:

			break;
		}
		binaryTree.showTree();
	}
}