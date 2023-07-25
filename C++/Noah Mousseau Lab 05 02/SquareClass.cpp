#include "SquareClass.h"

void Square::setLength(float le) {
	length = le;
};
float Square::getLength() const {
	return length;
};
float Square::getArea() const {
	float area = length * length;
	return area;
};
Square::Square(float le) {
	length = le;
};