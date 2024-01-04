#include "QueueLinked.h"

template <typename DataType>
QueueLinked<DataType>::QueueNode::QueueNode(const DataType& nodeData, QueueNode* nextPtr)
    : dataItem(nodeData), next(nextPtr)
{
}

template <typename DataType>
QueueLinked<DataType>::QueueLinked(int maxNumber)
    : front(nullptr), back(nullptr)
{
}

template <typename DataType>
QueueLinked<DataType>::QueueLinked(const QueueLinked& other)
    : front(nullptr), back(nullptr)
{
    QueueNode* otherCurrent = other.front;
    while (otherCurrent != nullptr) {
        enqueue(otherCurrent->dataItem);
        otherCurrent = otherCurrent->next;
    }
}

template <typename DataType>
QueueLinked<DataType>& QueueLinked<DataType>::operator=(const QueueLinked& other)
{
    if (this != &other) {
        clear();
        QueueNode* otherCurrent = other.front;
        while (otherCurrent != nullptr) {
            enqueue(otherCurrent->dataItem);
            otherCurrent = otherCurrent->next;
        }
    }
    return *this;
}

template <typename DataType>
QueueLinked<DataType>::~QueueLinked()
{
    clear();
}

template <typename DataType>
void QueueLinked<DataType>::enqueue(const DataType& newDataItem) throw (logic_error)
{
    QueueNode* newNode = new QueueNode(newDataItem, nullptr);
    if (isEmpty()) {
        front = newNode;
        back = newNode;
    }
    else {
        back->next = newNode;
        back = newNode;
    }
}

template <typename DataType>
DataType QueueLinked<DataType>::dequeue() throw (logic_error)
{
    if (isEmpty()) {
        throw logic_error("Queue is empty");
    }
    DataType temp = front->dataItem;
    QueueNode* tempPtr = front;
    front = front->next;
    if (front == nullptr) {
        back = nullptr;
    }
    delete tempPtr;
    return temp;
}

template <typename DataType>
void QueueLinked<DataType>::clear()
{
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename DataType>
bool QueueLinked<DataType>::isEmpty() const
{
    return front == nullptr;
}

template <typename DataType>
bool QueueLinked<DataType>::isFull() const
{
    return false;
}

template <typename DataType>
void QueueLinked<DataType>::putFront(const DataType& newDataItem) throw (logic_error)
{
    QueueNode* newNode = new QueueNode(newDataItem, front);
    if (isEmpty()) {
        back = newNode;
    }
    front = newNode;
}

template <typename DataType>
DataType QueueLinked<DataType>::getRear() throw (logic_error)
{
    if (isEmpty()) {
        throw logic_error("Queue is empty");
    }
    return back->dataItem;
}

template <typename DataType>
int QueueLinked<DataType>::getLength() const
{
    int length = 0;
    QueueNode* current = front;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

template <typename DataType>
void QueueLinked<DataType>::showStructure() const
{
    QueueNode* p = front;
    if (isEmpty()) {
        cout << "Empty queue" << endl;
    }
    else {
        cout << "Front\t";
        while (p != nullptr) {
            if (p == front) {
                cout << "[" << p->dataItem << "] ";
            }
            else {
                cout << p->dataItem << " ";
            }
            p = p->next;
        }
        cout << "\trear" << endl;
    }
}
