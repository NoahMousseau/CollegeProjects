#include "dayType.h"

void dayType::setDay(int d) {
	day = d;
};
void dayType::printDay() {
	cout << dayArr[day];
};
string dayType::getDay() {
	return dayArr[day];
};
string dayType::getNextDay() {
	if (day == 6) {
		return dayArr[0];
	}
	else {
		return dayArr[day + 1];
	}
};
string dayType::getLastDay() {
	if (day == 0) {
		return dayArr[6];
	}
	else {
		return dayArr[day - 1];
	}
};
string dayType::calculateDay(int dPlus) {
	dPlus = dPlus % 7;
	if (day + dPlus > 6) {
		if (day + dPlus - 6 < 6) {
			return dayArr[day + dPlus - 6];
		}
	}
	else {
		return dayArr[day + dPlus];
	}
};
dayType::dayType() {
	day = 0;
	dayOfWeek = dayArr[day];
};
dayType::dayType(int d) {
	day = d;
	dayOfWeek = dayArr[day];
};
dayType::dayType(string d) {
	dayOfWeek = d;
	for (int i = 0; i < 7; i++) {
		if (d == dayArr[i]) {
			day = i;
		}
	}
};
dayType::~dayType() {
	cout << "dayType object destroyed\n";
};