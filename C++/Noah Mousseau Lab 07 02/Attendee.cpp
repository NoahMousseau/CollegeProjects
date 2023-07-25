#include "Attendee.h"

void Attendee::setFirstName(string fn) {
	firstname = fn;
}
void Attendee::setLastName(string ln) {
	lastname = ln;
}
string Attendee::getFirstName() const {
	return firstname;
}
string Attendee::getLastName() const {
	return lastname;
}
Attendee::Attendee(string fn, string ln) {
	firstname = fn;
	lastname = ln;
}