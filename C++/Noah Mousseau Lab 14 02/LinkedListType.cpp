#include "LinkedList.h"
#include <iostream>

bool LinkedListType::isEmpty() const {
	if (first == nullptr && last == nullptr) {
		return true;
	}
	else {
		return false;
	}
};
int LinkedListType::getSize() const {
	return size;
};
void LinkedListType::display() const {
	NodeType* current;
	current = first;
	int sCompare = 0;
	while (sCompare < size) {
		cout << current->data.getFirstName() << " " << current->data.getLastName() << endl;
		current = current->next;
		sCompare++;
	}
};
void LinkedListType::addFirst(Student studentData) {
	NodeType* newNode = new NodeType;
	newNode->data.setFirstName(studentData.getFirstName());
	newNode->data.setLastName(studentData.getLastName());
	if (isEmpty()) {
		first = newNode;
		last = newNode;
	}
	else {
		newNode->next = first;
		first = newNode;
	}
	size++;
};
Student LinkedListType::getFirst() const {
	if (isEmpty()) {
		throw "The list is empty";
	}
	else {
		return first->data;
	}
};
Student LinkedListType::getLast() const {
	if (isEmpty()) {
		throw "The list is empty";
	}
	else {
		return last->data;
	}
};
void LinkedListType::addLast(Student studentData) {
	NodeType* newNode = new NodeType;
	newNode->data.setFirstName(studentData.getFirstName());
	newNode->data.setLastName(studentData.getLastName());
	if (isEmpty()) {
		first = newNode;
		last = newNode;
	}
	else {
		last->next = newNode;
		last = newNode;
	}
	size++;
};
LinkedListType::LinkedListType() {
	first = nullptr;
	last = nullptr;
	size = 0;
};