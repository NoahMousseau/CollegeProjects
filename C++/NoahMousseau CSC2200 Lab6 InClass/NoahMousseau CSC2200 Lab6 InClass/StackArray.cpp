#include "StackArray.h"

template <typename DataType>
StackArray<DataType>::StackArray(int maxNumber) : maxSize(Stack<DataType>::MAX_STACK_SIZE), top(-1)
{
    dataItems = new DataType[maxSize];
}

template <typename DataType>
StackArray<DataType>::StackArray(const StackArray& other) : maxSize(other.maxSize), top(other.top)
{
    dataItems = new DataType[maxSize];
    for (int i = 0; i <= top; ++i)
    {
        dataItems[i] = other.dataItems[i];
    }
}

template <typename DataType>
StackArray<DataType>& StackArray<DataType>::operator=(const StackArray& other)
{
    if (this != &other)
    {
        delete[] dataItems;

        maxSize = other.maxSize;
        top = other.top;

        dataItems = new DataType[maxSize];
        for (int i = 0; i <= top; ++i)
        {
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
    if (isFull())
    {
        throw logic_error("Stack overflow");
    }
    dataItems[++top] = newDataItem;
}

template <typename DataType>
DataType StackArray<DataType>::pop() throw (logic_error)
{
    if (isEmpty())
    {
        throw logic_error("Stack underflow");
    }
    return dataItems[top--];
}

template <typename DataType>
void StackArray<DataType>::clear()
{
    top = -1;
}

template <typename DataType>
bool StackArray<DataType>::isEmpty() const
{
    return top == -1;
}

template <typename DataType>
bool StackArray<DataType>::isFull() const
{
    return top == maxSize - 1;
}

template <typename DataType>
void StackArray<DataType>::showStructure() const
{
    if (isEmpty())
    {
        cout << "Empty stack." << endl;
    }
    else
    {
        cout << "Top = " << top << endl;
        for (int j = 0; j < maxSize; j++)
            cout << j << "\t";
        cout << endl;
        for (int j = 0; j <= top; j++)
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
