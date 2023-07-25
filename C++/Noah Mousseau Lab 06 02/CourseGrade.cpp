#include "CourseGrade.h"

void CourseGrade::setCourse(int c) {
	if (c < 1000) {
		course = 1000;
	}
	else if (c > 9999) {
		course = 9999;
	}
	else {
		course = c;
	}
};
void CourseGrade::setGrade(float g) {
	if (g < 0.00) {
		grade = 0.00;
	}
	else if (g > 100.00) {
		grade = 100.00;
	}
	else {
		grade = g;
	}
};
int CourseGrade::getCourse() const {
	return course;
};
float CourseGrade::getGrade() const {
	return grade;
};
CourseGrade::CourseGrade(int c, float g) {
	if (c < 1000) {
		course = 1000;
	}
	else if (c > 9999) {
		course = 9999;
	}
	else {
		course = c;
	}
	if (g < 0.00) {
		grade = 0.00;
	}
	else if (g > 100.00) {
		grade = 100.00;
	}
	else {
		grade = g;
	}
};