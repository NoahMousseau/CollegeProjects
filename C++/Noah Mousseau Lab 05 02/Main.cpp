#include "SquareClass.h"
#include "SquareLib.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	cout << "Square App!\n";
	cout << "-------------------------\n";
	cout << "Length Area\n";
	cout << "-------------------------\n";
	Square s(2);
	cout << setw(8) << left << s.getLength() << s.getArea() << endl;
	s = doubleLength_1(s);
	cout << setw(8) << left << s.getLength() << s.getArea() << endl;
	doubleLength_2(s);
	cout << setw(8) << left << s.getLength() << s.getArea() << endl;
	doubleLength_3(&s);
	cout << setw(8) << left << s.getLength() << s.getArea() << endl;
}