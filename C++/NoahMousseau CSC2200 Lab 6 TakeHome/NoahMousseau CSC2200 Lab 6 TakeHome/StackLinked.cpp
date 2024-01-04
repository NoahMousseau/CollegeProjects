
#include "StackLinked.h"

template <typename DataType>
StackLinked<DataType>::StackLinked(int maxNumber)
{
	top = NULL;
}

template <typename DataType>
StackLinked<DataType>::StackLinked(const StackLinked& other)
{
	*this = other;
}

template <typename DataType>
StackLinked<DataType>& StackLinked<DataType>::operator=(const StackLinked& other)
{
	if (this != &other) {
		//Clear current stack
		clear();
		//Copy elements from other stack
		StackNode* temp = other.top;
		StackNode* newTop = NULL;
		StackNode* lastNode = NULL;
		//Traverse other stack, create new nodes in current stack from other
		while (temp != NULL) {
			StackNode* newNode = new StackNode(temp->dataItem, NULL);
			//If first node, update top
			if (lastNode == NULL) {
				top = newNode;
				lastNode = newNode;
				newTop = newNode;
			}
			//Else link new node to previous node
			else {
				lastNode->next = newNode;
				lastNode = newNode;
			}
			temp = temp->next;
		}
		//Update to top, if new elements in stack
		if (newTop != NULL) {
			top = newTop;
		}
	}
	return *this;
}

template <typename DataType>
StackLinked<DataType>::~StackLinked()
{
	clear();
}

template <typename DataType>
void StackLinked<DataType>::push(const DataType& newDataItem) throw (logic_error)
{
	top = new StackNode(newDataItem, top);
}

template <typename DataType>
DataType StackLinked<DataType>::pop() throw (logic_error)
{
	if (isEmpty()) {
		throw logic_error("Stack underflow");
	}
	DataType temp = top->dataItem;
	StackNode* tempPtr = top;
	top = top->next;
	delete tempPtr;
	return temp;
}

template <typename DataType>
void StackLinked<DataType>::clear()
{
	while (!isEmpty()) {
		StackNode* temp = top;
		top = top->next;
		delete temp;
	}
}

template <typename DataType>
bool StackLinked<DataType>::isEmpty() const
{
	return top == NULL;
}

template <typename DataType>
bool StackLinked<DataType>::isFull() const
{
	return false;
}

template <typename DataType>
void StackLinked<DataType>::showStructure() const
{
	if (isEmpty())
	{
		cout << "Empty stack" << endl;
	}
	else
	{
		cout << "Top\t";
		for (StackNode* temp = top; temp != 0; temp = temp->next) {
			if (temp == top) {
				cout << "[" << temp->dataItem << "]\t";
			}
			else {
				cout << temp->dataItem << "\t";
			}
		}
		cout << "Bottom" << endl;
	}

}
