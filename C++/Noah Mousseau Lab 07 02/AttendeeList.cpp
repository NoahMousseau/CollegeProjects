#include "AttendeeList.h"

void AttendeeList::addAttendee(string fn, string ln) {
	if (position < MAXIMUM_SIZE) {
		list[position++] = new Attendee(fn, ln);
	}
	else {
		return;
	}
}

Attendee* AttendeeList::getAttendee(int i) const {
	if (i >= 0 and i < 5) {
		return list[i];
	}
	else {
		nullptr;
	}
}

int AttendeeList::getSize() const {
	return position;
}
void AttendeeList::print() const {
	for (int i = 0; i < MAXIMUM_SIZE; i++) {
		if (list[i] == nullptr) {
			cout << "[Empty]\n";
		}
		else {
			cout << i << ". " << list[i]->getFirstName() << " " << list[i]->getLastName() << endl;
		}
	}
}

AttendeeList::AttendeeList() {
	position = 0;
	for (int i = 0; i < MAXIMUM_SIZE; i++) {
		list[i] = nullptr;
	}
}

void AttendeeList::removeLastAttendee() {
	if (position < MAXIMUM_SIZE) {
		position--;
		delete list[position];
		list[position] = nullptr;
	}
	else if (position == 0) {
		return;
	}
};

void AttendeeList::swapAttendees(int p0, int p1) {
	if ((p0 < 0 || p1 < 0) || (p0 >= position || p1 >= position)) {
		cout << "\tOne or both of the positions are invalid. A swap was not executed.\n";
	}
	else {
		Attendee* tempPtr;
		tempPtr = new Attendee(list[p0]->getFirstName(), list[p0]->getLastName());
		list[p0] = list[p1];
		list[p1] = tempPtr;
	}
};

bool AttendeeList::isEmpty() const {
	if (position == 0) {
		return true;
	}
	else {
		return false;
	}
};

bool AttendeeList::isFull() const {
	if (position == MAXIMUM_SIZE) {
		return true;
	}
	else {
		return false;
	}
};

int AttendeeList::getMaxSize() {
	return MAXIMUM_SIZE;
};