#include "circle.h"
#include "square.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Circle and Square App!\n";
	cout << "----------------------\n";
	cout << "Circle\n";
	Circle c1;
	c1.setRadius(3);
	Square s1;
	s1.setLength(5);
	cout << "Radius: " << c1.getRadius() << endl;
	cout << "Area: " << c1.getArea() << endl;
	cout << "\n";
	cout << "Square\n";
	cout << "Length: " << s1.getLength() << endl;
	cout << "Area: " << s1.getArea() << endl;
}