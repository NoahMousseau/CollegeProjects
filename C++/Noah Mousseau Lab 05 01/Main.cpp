#include "ClassDeclarations.h" 

int main() {
	int x0, y0, x1, y1;
	cout << "Rectangle App!\n";
	cout << "-----------------------\n";
	cout << "Enter x0 and y0: ";
	cin >> x0 >> y0;
	cout << "Etner x1 and y1: ";
	cin >> x1 >> y1;
	cout << "\n";
	RectangleType rect1(x0, y0, x1, y1);
	cout << "Rectangle information: \n";
	cout << "Width: " << rect1.getWidth() << endl;
	cout << "Length: " << rect1.getLength() << endl;
	cout << "Perimeter: " << rect1.getPerimeter() << endl;
	cout << "Area: " << rect1.getArea() << endl;
}