#pragma once
#include "Student.h"
#include "NodeType.h"

class LinkedListType {
private:
	int size;
	NodeType* first;
	NodeType* last;
public:
	bool isEmpty() const;
	int getSize() const;
	void display() const;
	void addLast(Student studentData);
	void addFirst(Student studentData);
	Student getLast() const;
	Student getFirst() const;
	LinkedListType();
};