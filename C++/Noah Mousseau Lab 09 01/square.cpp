#include "square.h"

void Square::setLength(float l) {
	length = l;
};
float Square::getLength() const {
	return length;
};
float Square::getArea() const {
	float area = length * length;
	return area;
};