#include <iostream>
#include "FunctionDeclaration.h"

using namespace std;

int main() {
	//Creating circle structs
	CircleStr circle1;
	CircleStr circle2;
	//Declaring radius for each
	circle1.radius = 15.2;
	circle2.radius = 20.1;
	//Calling functions for circle1
	calculateCirclePerimeterStruct(circle1);
	calculateCircleAreaStruct(circle1);
	//Calling functions for circle2
	calculateCirclePerimeterStruct(circle2);
	calculateCircleAreaStruct(circle2);
	//Outputting information
	cout << "Circle App!\n";
	cout << "---------------------------------\n";
	cout << "RADIUS     PERIMETER     AREA\n";
	cout << "---------------------------------\n";
	cout << "Struct\n";
	cout << circle1.radius << "       " << circle1.perimeter << "       " << circle1.area << endl;
	cout << circle2.radius << "       " << circle2.perimeter << "      " << circle2.area << endl;
}