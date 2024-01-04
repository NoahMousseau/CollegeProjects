#include "ListLinked.h"
#include <iostream>

//ListNode constructor for nodes in ListLinked
template <typename DataType>
List<DataType>::ListNode::ListNode(const DataType& nodeData, ListNode* nextPtr)
{
    this->dataItem = nodeData;
    this->next = nextPtr;
}

//Default constructor for an empty list
template <typename DataType>
List<DataType>::List(int ignored)
{
    head = nullptr;
    cursor = nullptr;
}

//Copy elements from current List to List 'other'
template <typename DataType>
List<DataType>::List(const List& other)
{
    head = nullptr;
    cursor = nullptr;
    if (!other.isEmpty()) {
        ListNode* otherCurrent = other.head;
        while (otherCurrent != nullptr) {
            insert(otherCurrent->dataItem);
            otherCurrent = otherCurrent->next;
        }
    }
}

//= operator overloading
template <typename DataType>
List<DataType>& List<DataType>::operator=(const List& other)
{
    if (this != &other)
    {
        //Clear current list
        clear();
        //Copy elements from 'other' List, if List is not empty
        if (!other.isEmpty()) {
            ListNode* otherCurrent = other.head;
            while (otherCurrent != nullptr) {
                insert(otherCurrent->dataItem);
                otherCurrent = otherCurrent->next;
            }
        }
    }
    return *this;
}

//ListLinked destructor
template <typename DataType>
List<DataType>::~List()
{
    clear();
}

//insert implementation for ListLinked
template <typename DataType>
void List<DataType>::insert(const DataType& newDataItem) throw (logic_error)
{
    if (isEmpty()) {
        head = new ListNode(newDataItem, nullptr);
        cursor = head;
    }
    else {
        cursor->next = new ListNode(newDataItem, cursor->next);
        cursor = cursor->next;
    }
}

//remove implementation for ListLinked
template <typename DataType>
void List<DataType>::remove() throw (logic_error)
{
    if (!isEmpty()) {
        if (cursor == head) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            cursor = head;
        }
        else {
            ListNode* prevNode = head;
            while (prevNode != nullptr && prevNode->next != cursor) {
                prevNode = prevNode->next;
            }

            if (prevNode != nullptr) {
                prevNode->next = cursor->next;
                delete cursor;
                cursor = prevNode->next;
            }
        }
    }
}

//replace implementation for ListLinked
template <typename DataType>
void List<DataType>::replace(const DataType& newDataItem) throw (logic_error)
{
    if (!isEmpty()) {
        cursor->dataItem = newDataItem;
    }
}

//Clears ListLinked of elements
template <typename DataType>
void List<DataType>::clear()
{
    while (!isEmpty()) {
        remove();
    }
}

//
template <typename DataType>
bool List<DataType>::isEmpty() const
{
    return head == nullptr;
}

template <typename DataType>
bool List<DataType>::isFull() const
{
    //Always assumes more memory is available
    return false;
}

//Moves cursor to beginning of ListLinked
template <typename DataType>
void List<DataType>::gotoBeginning() throw (logic_error)
{
    cursor = head;
}

//Moves cursor to end of ListLinked
template <typename DataType>
void List<DataType>::gotoEnd() throw (logic_error)
{
    while (cursor != nullptr && cursor->next != nullptr) {
        cursor = cursor->next;
    }
}

//Moves cursor to next element of ListLinked
template <typename DataType>
bool List<DataType>::gotoNext() throw (logic_error)
{
    if (cursor != nullptr && cursor->next != nullptr) {
        cursor = cursor->next;
        return true;
    }
    return false;
}

//Moves cursor to previous element of ListLinked
template <typename DataType>
bool List<DataType>::gotoPrior() throw (logic_error)
{
    if (cursor != nullptr && cursor != head) {
        ListNode* prevNode = head;
        while (prevNode != nullptr && prevNode->next != cursor) {
            prevNode = prevNode->next;
        }
        if (prevNode != nullptr) {
            cursor = prevNode;
            return true;
        }
    }
    return false;
}

//Returns dataItem at cursor location
template <typename DataType>
DataType List<DataType>::getCursor() const throw (logic_error)
{
    if (!isEmpty()) {
        return cursor->dataItem;
    }
    throw logic_error("List is empty");
}

//Moves current cursor element to beginning of ListLinked
template <typename DataType>
void List<DataType>::moveToBeginning() throw (logic_error)
{
    {
        if (!isEmpty() && cursor != head) {
            // Initialize pointers
            ListNode* prevNode = nullptr;
            ListNode* current = head;
            //Traverse the list to find the last element
            while (current->next != nullptr) {
                prevNode = current;
                current = current->next;
            }
            //Move all elements to the right by 1
            prevNode->next = nullptr; //Disconnect the last element
            current->next = head;     //Connect the last element to the current first element
            head = current;           //Update the head to the last element
            // Update the cursor to point to the newly positioned element
            cursor = head;
        }
    }
}

//Inserts element before the cursor
template <typename DataType>
void List<DataType>::insertBefore(const DataType& newDataItem) throw (logic_error)
{
    if (!isEmpty() && cursor != head) {
        ListNode* prevNode = head;
        while (prevNode != nullptr && prevNode->next != cursor) {
            prevNode = prevNode->next;
        }
        if (prevNode != nullptr) {
            prevNode->next = new ListNode(newDataItem, cursor);
        }
    }
}

template <typename DataType>
void List<DataType>::showStructure() const
{
    if (isEmpty()) {
        cout << "Empty list" << endl;
    }
    else {
        for (ListNode* temp = head; temp != nullptr; temp = temp->next) {
            if (temp == cursor) {
                cout << "[";
            }

            // Assumes that dataItem can be printed via << because
            // it is either primitive or operator<< is overloaded.
            cout << temp->dataItem;

            if (temp == cursor) {
                cout << "]";
            }
            cout << " ";
        }
        cout << endl;
    }
}
