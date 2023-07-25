#include "dayType.h"

//Creating objects from classes and testing
int main() {
	dayType day1(0);
	cout << "First object: ";
	day1.printDay();
	dayType day2(day1.getDay());
	cout << "Previous day: " << day2.getLastDay() << endl;
	dayType day3(day1.getDay());
	cout << "Next day: " << day3.getNextDay() << endl;
	dayType day4(day1.getDay());
	cout << "After 11 days: " << day4.calculateDay(11) << endl;
}