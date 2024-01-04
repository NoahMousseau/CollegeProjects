
#include "BSTree.h"

template <typename DataType, class KeyType>
BSTree<DataType, KeyType>::BSTreeNode::BSTreeNode(const DataType& nodeDataItem, BSTreeNode* leftPtr, BSTreeNode* rightPtr)
{
}

template < typename DataType, class KeyType >
BSTree<DataType, KeyType>::BSTree()
{
	root = NULL;
}

//Copy constructor
template < typename DataType, class KeyType >
BSTree<DataType, KeyType>::BSTree(const BSTree<DataType, KeyType>& other)
{
	root = nullptr;
	if (other.root) {
		root = new BSTreeNode(other.root->dataItem, nullptr, nullptr);
		copyTree(root, other.root);
	}
}
//Copy constructor helper
template <typename DataType, class KeyType>
void BSTree<DataType, KeyType>::copyTree(BSTreeNode*& newPtr, const BSTreeNode* originalPtr) {
	if (originalPtr) {
		newPtr = new BSTreeNode(originalPtr->dataItem, nullptr, nullptr);
		copyTree(newPtr->left, originalPtr->left);
		copyTree(newPtr->right, originalPtr->right);
	}
}

//Overloaded assignment operator
template < typename DataType, class KeyType >
BSTree<DataType, KeyType>& BSTree<DataType, KeyType>:: operator= (const BSTree<DataType, KeyType>& other)
{
	if (this != &other) {
		clear(); // Clear the existing tree
		if (other.root) {
			root = new BSTreeNode(other.root->dataItem, nullptr, nullptr);
			copyTree(root, other.root);
		}
	}
	return *this;
}

//Destructor
template < typename DataType, class KeyType >
BSTree<DataType, KeyType>::~BSTree()
{
	clear();
}

//Clear helper
template <typename DataType, class KeyType>
void BSTree<DataType, KeyType>::clearHelper(BSTreeNode*& node) {
	if (node) {
		clearHelper(node->left);
		clearHelper(node->right);
		delete node;
		node = nullptr;
	}
}

//Clear function
template <typename DataType, class KeyType>
void BSTree<DataType, KeyType>::clear() {
	clearHelper(root);
}

//Insert function
template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::insert(const DataType& newDataItem)
{
	insertHelper(root, newDataItem);
}

//Insert function helper
template <typename DataType, class KeyType>
void BSTree<DataType, KeyType>::insertHelper(BSTreeNode*& node, const DataType& newDataItem) {
	if (node == nullptr) {
		node = new BSTreeNode(newDataItem, nullptr, nullptr);
	}
	else if (newDataItem.getKey() < node->dataItem.getKey()) {
		insertHelper(node->left, newDataItem);
	}
	else if (newDataItem.getKey() > node->dataItem.getKey()) {
		insertHelper(node->right, newDataItem);
	}
	else {
		// If a data item with the same key exists, update it with newDataItem
		node->dataItem = newDataItem;
	}
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::retrieve(const KeyType& searchKey, DataType& searchDataItem) const
{
	return false;
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::remove(const KeyType& deleteKey)
{
	return false;
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::writeKeys() const
{
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::clear()
{
}

template < typename DataType, class KeyType >
bool BSTree<DataType, KeyType>::isEmpty() const
{
	return false;
}

template < typename DataType, class KeyType >
int BSTree<DataType, KeyType>::getHeight() const
{
	return -1;
}

template < typename DataType, class KeyType >
int BSTree<DataType, KeyType>::getCount() const
{
	return -1;
}

template < typename DataType, class KeyType >
void BSTree<DataType, KeyType>::writeLessThan(const KeyType& searchKey) const
{
}


#include "show9.cpp";