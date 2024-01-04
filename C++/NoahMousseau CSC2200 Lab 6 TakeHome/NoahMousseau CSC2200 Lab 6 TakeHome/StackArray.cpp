
#include "StackArray.h"

template <typename DataType>
StackArray<DataType>::StackArray(int maxNumber)
{
	dataItems = new DataType[maxNumber];
	maxSize = maxNumber;
	top = -1;
}

template <typename DataType>
StackArray<DataType>::StackArray(const StackArray& other)
{
	dataItems = new DataType[maxSize];
	for (int i = 0; i <= top; ++i) {
		dataItems[i] = other.dataItems[i];
	}
}

template <typename DataType>
StackArray<DataType>& StackArray<DataType>::operator=(const StackArray& other)
{
	if (this != &other) {
		delete[] dataItems;
		maxSize = other.maxSize;
		top = other.top;
		dataItems = new DataType[maxSize];
		for (int i = 0; i <= top; ++i) {
			dataItems[i] = other.dataItems[i];
		}
	}
	return *this;
}

template <typename DataType>
StackArray<DataType>::~StackArray()
{
	delete[] dataItems;
}

template <typename DataType>
void StackArray<DataType>::push(const DataType& newDataItem) throw (logic_error)
{
	if (isFull()) {
		throw logic_error("Stack overflow");
	}
	else {
		dataItems[++top] = newDataItem;
	}
}

template <typename DataType>
DataType StackArray<DataType>::pop() throw (logic_error)
{
	if (isEmpty()) {
		throw logic_error("Stack underflow");
	}
	else {
		return dataItems[top--];
	}
}

template <typename DataType>
void StackArray<DataType>::clear()
{
	top = -1;
}

template <typename DataType>
bool StackArray<DataType>::isEmpty() const
{
	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
}

template <typename DataType>
bool StackArray<DataType>::isFull() const
{
	if (top == maxSize - 1) {
		return true;
	}
	else {
		return false;
	}
}

template <typename DataType>
void StackArray<DataType>::showStructure() const

// Array implementation. Outputs the data items in a stack. If the
// stack is empty, outputs "Empty stack". This operation is intended
// for testing and debugging purposes only.

{
	if (isEmpty()) {
		cout << "Empty stack." << endl;
	}
	else {
		int j;
		cout << "Top = " << top << endl;
		for (j = 0; j < maxSize; j++)
			cout << j << "\t";
		cout << endl;
		for (j = 0; j <= top; j++)
		{
			if (j == top)
			{
				cout << '[' << dataItems[j] << ']' << "\t"; // Identify top
			}
			else
			{
				cout << dataItems[j] << "\t";
			}
		}
		cout << endl;
	}
	cout << endl;
}