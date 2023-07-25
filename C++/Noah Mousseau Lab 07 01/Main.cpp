#include "Attendee.h"
#include "AttendeeList.h"

void addAttendeeDialog(AttendeeList& aList) {
	if (aList.getSize() == 5) {
		cout << "List is full. A new attendee cannot be added.\n";
	}
	string fn, ln;
	cout << "---Add an attendee\n";
	cout << "Enter attendee's first name: ";
	cin >> fn;
	cout << "Enter attendee's last name: ";
	cin >> ln;
	aList.addAttendee(fn, ln);
}

int main() {
	AttendeeList aList;

	int x = 1;
	while (x == 1) {
		cout << "===MENU===\n";
		cout << "1. Add an attendee\n";
		cout << "2. Exit.\n";
		cout << "Choose an option[1-2]: ";
		int y;
		cin >> y;
		if (y == 1) {
			addAttendeeDialog(aList);
			aList.print();
		}
		else if (y == 2) {
			x = y;
		}
		else {
			cout << "Invalid option. Try again.\n";
		}
	}
}