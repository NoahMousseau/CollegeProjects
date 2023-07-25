#include "CircleType.h"
#include "RectangleType.h"
#include <iostream>

using namespace std;

int main() {
	RectangleType r0(6,12);
	RectangleType r1(3,6);
	RectangleType r2 = r0 + r1;
	RectangleType r3 = r0 - r1;
	CircleType c0(4);
	CircleType c1(2);
	CircleType c2 = c0 + c1;
	CircleType c3 = c0 - c1;
	cout << "Displaying data of RectangleType and CircleType onjects: \n";
	cout << "r0(length) = " << r0.getLength() << " " << "r0(width) = " << r0.getWidth() << endl;
	cout << "r1(length) = " << r1.getLength() << " " << "r1(width) = " << r1.getWidth() << endl;
	cout << "r2(length) = " << r2.getLength() << " " << "r2(width) = " << r2.getWidth() << endl;
	cout << "r3(length) = " << r3.getLength() << " " << "r3(width) = " << r3.getWidth() << endl;
	cout << "c0(radius) = " << c0.getRadius() << " " << "c0(area) = " << c0.getArea() << endl;
	cout << "c1(radius) = " << c1.getRadius() << " " << "c1(area) = " << c1.getArea() << endl;
	cout << "c2(radius) = " << c2.getRadius() << " " << "c2(area) = " << c2.getArea() << endl;
	cout << "c3(radius) = " << c3.getRadius() << " " << "c3(area) = " << c3.getArea() << endl;
}