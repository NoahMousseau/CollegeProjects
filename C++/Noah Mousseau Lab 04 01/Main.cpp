#include "CircleCylinder.h"

int main() {
	float r;
	float h;
	cout << "Cylinder App!\n";
	cout << "-----------------------\n";
	cout << "Enter radius: ";
	cin >> r;
	cout << "Enter height: ";
	cin >> h;
	Cylinder c1;
	c1.setRadius(r);
	c1.setHeight(h);
	cout << "Cylinder area: " << c1.getArea() << endl;
	cout << "Cylinder volume: " << c1.getVolume() << endl;
}