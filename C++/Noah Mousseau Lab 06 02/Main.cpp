#include "CourseGrade.h"
#include <iostream>

using namespace std;

CourseGrade* maximumGrade(CourseGrade* course0, CourseGrade* course1) {
	float grade1 = course0->getGrade();
	float grade2 = course1->getGrade();
	if (grade1 > grade2) {
		CourseGrade* p1;
		p1 = course0;
		return p1;
	}
	else if (grade2 > grade1) {
		CourseGrade* p1;
		p1 = course1;
		return p1;
	}
}

int main() {
	cout << "Course Grade App!\n";
	cout << "-------------------------\n";
	cout << "\n";

	//Declaring the objects and getting data from user
	cout << "Enter the code of the first course: ";
	int cName1;
	cin >> cName1;
	cout << "Enter the grade of the first course: ";
	float cGrade1;
	cin >> cGrade1;
	CourseGrade c1(cName1, cGrade1);
	cout << "\n";

	cout << "Enter the code of the second course: ";
	int cName2;
	cin >> cName2;
	cout << "Enter the grade of the second course: ";
	float cGrade2;
	cin >> cGrade2;
	CourseGrade c2(cName2, cGrade2);
	cout << "\n";

	cout << "Enter the code of the second course: ";
	int cName3;
	cin >> cName3;
	cout << "Enter the grade of the second course: ";
	float cGrade3;
	cin >> cGrade3;
	CourseGrade c3(cName3, cGrade3);
	cout << "\n";

	cout << "--------------------------\n";
	cout << "Course  Grade\n";
	cout << "--------------------------\n";

	//Pointer initialization
	CourseGrade* p1;
	CourseGrade* p2;
	CourseGrade* p3;
	p1 = &c1;
	p2 = &c2;
	p3 = &c3;

	//Printing data using pointers
	cout << p1->getCourse() << "    " << p1->getGrade() << endl;
	cout << p2->getCourse() << "    " << p2->getGrade() << endl;
	cout << p3->getCourse() << "    " << p3->getGrade() << endl;

	cout << "\n";

	//Get average and print using pointers
	float g1 = p1->getGrade();
	float g2 = p2->getGrade();
	float g3 = p3->getGrade();
	float* ar;
	float average = (g1 + g2 + g3) / 3;
	ar = &average;
	cout << "The average grade is " << *ar << endl;

	cout << "\n";

	//Get maximum grade and print using pointers
	cout << "The course with the maximum grade is ";
	CourseGrade* a1 = maximumGrade(p1, p2);
	CourseGrade* a2 = maximumGrade(a1, p3);
	cout << a2->getCourse();
}