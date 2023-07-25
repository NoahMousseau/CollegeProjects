#include "AttendeeList.h"

void AttendeeList::addAttendee(string fn, string ln) {
	if (position <= 5) {
		Attendee newAttendee(fn, ln);
		list[position] = &newAttendee;
		position++;
	}
};
Attendee* AttendeeList::getAttendee(int i) const {
	if (i < 5) {
		return *(list + i);
	}
};
int AttendeeList::getSize() const {
	return position;
};
void AttendeeList::print() const {
	cout << "===ATTENDEE LIST===\n";
	for (int i = 0; i < 5; i++) {
		if (i < position) {
			cout << list[i]->getFirstName() << " " << list[i]->getLastName() << endl;
		}
		else {
			cout << "[Empty]\n";
		}
	}
};
AttendeeList::AttendeeList() {
	list[0] = new Attendee;
	list[1] = new Attendee;
	list[2] = new Attendee;
	list[3] = new Attendee;
	list[4] = new Attendee;
	position = 0;
};