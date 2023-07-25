#include "ClassDeclarations.h"

int main() {
	float h;
	float r;
	cout << "Cylinder App!\n";
	cout << "---------------------------\n";
	cout << "Enter radius: ";
	cin >> r;
	cout << "Enter height: ";
	cin >> h;
	ProtectedCylinder proc(r, h);
	cout << "Cylinder area: " << proc.getArea() << endl;
	cout << "Cylinder volume: " << proc.getVolume() << endl;
	cout << "\n";
	cout << "Enter radius: ";
	cin >> r;
	cout << "Enter height: ";
	cin >> h;
	PrivateCylinder pric(r, h);
	cout << "Cylinder area: " << pric.getArea() << endl;
	cout << "Cylinder volume: " << pric.getVolume() << endl;
}