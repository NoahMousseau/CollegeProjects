
#include "ListArray.h"

//List constructor
template <typename DataType>
List<DataType>::List(int maxNumber)
    : maxSize(maxNumber), size(0), cursor(-1), dataItems(new DataType[maxNumber]) {}


template < typename DataType >
List<DataType>::List(const List& source)
{
    //Copy constructor
    dataItems = new DataType[maxSize];
    for (int i = 0; i < size; i++) {
        dataItems[i] = source.dataItems[i];
    }
}

template < typename DataType >
List<DataType>& List<DataType>::operator= (const List& source)
{
    //Overloading = operator
    if (this != &source) {
        delete[] dataItems;
        maxSize = source.maxSize;
        size = source.size;
        cursor = source.cursor;
        dataItems = new DataType[source.maxSize];
        for (int i = 0; i < source.size; i++) {
            dataItems[i] = source.dataItems[i];
        }
    }
    return *this;
}

//Destructor
template < typename DataType >
List<DataType>::~List()
{
    delete[] dataItems;
}

//Insert function implementation
template <typename DataType>
void List<DataType>::insert(const DataType& newDataItem) {
    if (isFull()) {
        std::cout << "List is full. Unable to insert." << std::endl;
    }
    else {
        if (isEmpty()) {
            cursor = 0;
        }
        else {
            for (int i = size; i > cursor; --i) {
                dataItems[i] = dataItems[i - 1];
            }
        }

        dataItems[cursor] = newDataItem;
        ++size;
    }
}

//Remove function implementation
template <typename DataType>
void List<DataType>::remove() {
    if (isEmpty()) {
        throw std::logic_error("List is empty.");
    }

    for (int i = cursor; i < size - 1; ++i) {
        dataItems[i] = dataItems[i + 1];
    }

    --size;

    if (cursor == size) {
        cursor = 0; 
    }
}

//Replace function implementation
template <typename DataType>
void List<DataType>::replace(const DataType& newDataItem) {
    if (isEmpty()) {
        throw std::logic_error("List is empty. Cannot replace.");
    }

    dataItems[cursor] = newDataItem;
}

//Clear function implementation
template <typename DataType>
void List<DataType>::clear() {
    size = 0;
    cursor = -1;
}

template <typename DataType>
bool List<DataType>::isEmpty() const {
    return (size == 0);
}

template <typename DataType>
bool List<DataType>::isFull() const {
    return (size == maxSize);
}

template <typename DataType>
void List<DataType>::gotoBeginning() {
    if (!isEmpty()) {
        cursor = 0;
    }
}

template <typename DataType>
void List<DataType>::gotoEnd() {
    if (!isEmpty()) {
        cursor = size - 1;
    }
}

template <typename DataType>
bool List<DataType>::gotoNext() {
    if (!isEmpty() && cursor < size - 1) {
        ++cursor;
        return true;
    }
    return false;
}

template <typename DataType>
bool List<DataType>::gotoPrior() {
    if (!isEmpty() && cursor > 0) {
        --cursor;
        return true;
    }
    return false;
}

//Get cursor function implementation
template <typename DataType>
DataType List<DataType>::getCursor() const {
    if (isEmpty()) {
        throw std::logic_error("List is empty.");
    }
    return dataItems[cursor];
}

//Display function for List
template <typename DataType>
void List<DataType>::showStructure() const {
    if (isEmpty()) {
        std::cout << "Empty list" << std::endl;
    }
    else {
        for (int i = 0; i < size; ++i) {
            if (i == cursor) {
                std::cout << "[*]";
            }
            else {
                std::cout << "[ ]";
            }
            std::cout << dataItems[i] << " ";
        }
        std::cout << std::endl;
    }
}

//Moves cursor to given nth position
template <typename DataType>
void List<DataType>::moveToNth(int n) {
    if (n < 0 || n >= size) {
        throw std::logic_error("Invalid position.");
    }

    cursor = n;
}

//Searches dataItems for given element
template <typename DataType>
bool List<DataType>::find(const DataType& searchDataItem) {
    for (int i = 0; i < size; ++i) {
        if (dataItems[i] == searchDataItem) {
            cursor = i;
            return true;
        }
    }
    return false;
}
