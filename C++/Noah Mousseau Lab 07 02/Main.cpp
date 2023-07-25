#include <iostream>
#include <string>
#include "AttendeeList.h"

using namespace std;

int Menu();
void addAttendeeDialog(AttendeeList& aList);
void removeLastAttendeeDialog(AttendeeList& aList);
void swapAttendeesDialog(AttendeeList& aList);

int main()
{
    int choice;
    AttendeeList myList;

    do {
        cout << "\n=== ATTENDEE LIST ===\n";
        myList.print();
        choice = Menu();
        if (choice == 1) addAttendeeDialog(myList);
        if (choice == 2) removeLastAttendeeDialog(myList);
        if (choice == 3) swapAttendeesDialog(myList);
    } while (choice != 4);
}

int Menu() {
    int userInput = 0;
    while (userInput < 1 || userInput > 4) {
        cout << "=== MENU ===\n";
        cout << "1. Add an attendee.\n";
        cout << "2. Remove last attendee\n";
        cout << "3. Swap positions of attendee\n";
        cout << "4. Exit\n";
        cout << "Choose an option [1-4]: ";
        cin >> userInput;
        if (userInput < 1 || userInput > 4) cout << "Invalid option. Try again.\n";
    }
    return userInput;
}

void addAttendeeDialog(AttendeeList& aList) {
    if (aList.getSize() >= aList.getMaxSize()) {
        cout << "List is full. A new attendee cannot be added.\n";
    }
    else {
        string fn, ln;
        cout << "\t--- Add an attendee\n";
        cout << "\tEnter attendee's first name: ";
        cin >> fn;
        cout << "\tEnter attendee's last name: ";
        cin >> ln;
        aList.addAttendee(fn, ln);
    }
}

void removeLastAttendeeDialog(AttendeeList& aList) {
    if (aList.isEmpty() == true) {
        cout << "\tList is empty. An attendee cannot be removed.\n";
    }
    else {
        aList.removeLastAttendee();
    }
}

void swapAttendeesDialog(AttendeeList& aList) {
    int p0;
    int p1;
    cout << "\tEnter the position of the first attendee: ";
    cin >> p0;
    cout << "\tEnter the position of the second attendee: ";
    cin >> p1;
    if ((p0 || p1) < 0 || (p0 || p1) >= aList.getMaxSize()) {
        cout << "\tOne or both of the positions are invalid. A swap was not executed.\n";
    }
    else {
        aList.swapAttendees(p0, p1);
    }
}