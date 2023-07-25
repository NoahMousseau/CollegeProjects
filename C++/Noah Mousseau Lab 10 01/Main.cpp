#include "Square.h"
#include <iostream>

using namespace std;

int main() {
	Square s1(2);
	Square s2(4);
	Square temp;
	float fTemp;
	temp = s1 + s2;
	fTemp = temp.getLength();
	cout << "Addition of 2 square objects: " << fTemp << endl;
	temp = s1 * s2;
	fTemp = temp.getLength();
	cout << "Multiplication of 2 square objects: " << fTemp << endl;
}