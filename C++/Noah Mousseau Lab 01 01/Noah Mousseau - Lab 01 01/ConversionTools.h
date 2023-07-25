#include <iostream>

using namespace std;

float ftoc(float f);

float ctof(float c);

int main() {
	float f;
	float c;
	cout << "Conversion App!\n";
	cout << "--------------------\n";
	cout << "Conversion F to C\n";
	cout << "Enter degrees F: ";
	cin >> f;
	cout << "C = " << ftoc(f)<<endl;
	cout << "\n";
	cout << "Conversion C to F\n";
	cout << "Enter degrees C: ";
	cin >> c;
	cout << "F = " << ctof(c) << endl;
}