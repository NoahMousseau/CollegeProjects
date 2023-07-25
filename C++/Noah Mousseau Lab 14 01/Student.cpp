#include "Student.h"

void Student::setFirstName(string f) {
	firstName = f;
};
void Student::setLastName(string l) {
	lastName = l;
};
string Student::getFirstName() const {
	return firstName;
};
string Student::getLastName() const {
	return lastName;
};
Student::Student(string f, string l) {
	firstName = f;
	lastName = l;
};
Student::Student() {
	firstName = "Placeholder firstname";
	lastName = "Placeholder lastname";
};