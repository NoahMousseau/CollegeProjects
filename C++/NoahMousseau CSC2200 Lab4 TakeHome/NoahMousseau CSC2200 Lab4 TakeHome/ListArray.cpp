
#include "ListArray.h"

template < typename DataType >
List<DataType>::List(int maxNumber)
{
	//Creates List Datatype with maxNumber size
	dataItems = new DataType[maxSize];
}

template < typename DataType >
List<DataType>::List(const List& source)
{
	//Creates a new DataType List called dataItems, copies source to new List
	dataItems = new DataType[maxSize];
	for (int i = 0; i < size; ++i)
	{
		dataItems[i] = source.dataItems[i];
	}
}

template < typename DataType >
List<DataType>& List<DataType>::operator= (const List& source)
{
	if (this != &source)
	{
		//Deallocate existing memory
		delete[] dataItems;

		//Copy data
		maxSize = source.maxSize;
		size = source.size;
		cursor = source.cursor;

		//Allocate new memory and copy data
		dataItems = new DataType[maxSize];
		for (int i = 0; i < size; ++i)
		{
			dataItems[i] = source.dataItems[i];
		}
	}
	return *this;
}

template < typename DataType >
List<DataType>::~List()
{
	delete[] dataItems;
}

template < typename DataType >
void List<DataType>::insert(const DataType& newDataItem)
throw (logic_error)
{
	if (isFull())
	{
		throw logic_error("List is full.");
	}

	//Shift elements to make space new item
	for (int i = size; i > cursor; --i)
	{
		dataItems[i] = dataItems[i - 1];
	}
	//Insert the new item and update size and cursor
	dataItems[cursor] = newDataItem;
	++size;
}

template < typename DataType >
void List<DataType>::remove() throw (logic_error)
{
	if (isEmpty())
	{
		throw logic_error("List is empty.");
	}

	//Shift elements to remove the current item
	for (int i = cursor; i < size - 1; ++i)
	{
		dataItems[i] = dataItems[i + 1];
	}
	//Update size (item is effectively removed)
	--size;
}

template < typename DataType >
void List<DataType>::replace(const DataType& newDataItem)
throw (logic_error)
{
	//Checks if List is empty, otherwise replaces
	if (isEmpty())
	{
		throw logic_error("List is empty. Cannot replace.");
	}
	dataItems[cursor] = newDataItem;
}

template < typename DataType >
void List<DataType>::clear()
{
	//Clears List of all elements
	size = 0;
	cursor = 0;
}

template < typename DataType >
bool List<DataType>::isEmpty() const
{
	//Returns result of comparison between size of List and an empty List (0)
	return (size == 0);
}

template < typename DataType >
bool List<DataType>::isFull() const
{
	//Returns result of comparison between size of List and maxSize of List
	return (size == maxSize);
}

template < typename DataType >
void List<DataType>::gotoBeginning()
throw (logic_error)
{
	//Throws error if List is empty, otherwise sets cursor to 0, start of List
	if (isEmpty())
	{
		throw logic_error("List is empty.");
	}
	cursor = 0;
}

template < typename DataType >
void List<DataType>::gotoEnd()
throw (logic_error)
{
	//Throws error if List is empty, otherwise sets cursor to size - 1, end of List
	if (isEmpty())
	{
		throw logic_error("List is empty.");
	}
	cursor = size - 1;
}

template < typename DataType >
bool List<DataType>::gotoNext()
throw (logic_error)
{
	//Throws error if List is empty, or if cursor is at end of List
	if (isEmpty() || cursor == size - 1)
	{
		return false;
	}
	++cursor;
	return true;
}

template < typename DataType >
bool List<DataType>::gotoPrior()
throw (logic_error)
{
	//Throws error if List is empty, or if cursor is at beginning
	if (isEmpty() || cursor == 0)
	{
		return false;
	}
	--cursor;
	return true;
}

template < typename DataType >
DataType List<DataType>::getCursor() const
throw (logic_error)
{
	//Returns location of cursor, gives an error if List is empty
	if (isEmpty())
	{
		throw logic_error("List is empty.");
	}
	return dataItems[cursor];
}

#include "show3.cpp"

template < typename DataType >
void List<DataType>::moveToNth(int n)
throw (logic_error)
{
	//Gives an error if specified location is less than 0 or greater than size of List
	if (n < 0 || n >= size)
	{
		throw logic_error("Invalid position.");
	}
	cursor = n;
}

template < typename DataType >
bool List<DataType>::find(const DataType& searchDataItem)
throw (logic_error)
{
	//Iterates through List, if finds specified item, returns true, else returns false
	for (int i = 0; i < size; ++i)
	{
		if (dataItems[i] == searchDataItem)
		{
			cursor = i;
			return true;
		}
	}
	return false;
}