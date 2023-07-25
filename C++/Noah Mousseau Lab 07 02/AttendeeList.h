#pragma once
#include <string>
#include <iostream>
#include "Attendee.h"

using namespace std;

class AttendeeList {
private:
	static const int MAXIMUM_SIZE = 4;
	Attendee* list[MAXIMUM_SIZE];
	int position;
public:
	bool isEmpty() const;
	bool isFull() const;
	void addAttendee(string fn, string ln);
	void removeLastAttendee();
	void swapAttendees(int p0, int p1);
	int getMaxSize();
	Attendee* getAttendee(int i) const;
	int getSize() const;
	void print() const;
	AttendeeList();
};