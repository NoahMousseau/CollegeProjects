#include "Square.h"

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
Square::Square(float l = 0) {
	length = l;
};
Square::Square() {
	length = 0;
};
Square Square::operator + (Square obj) {
	float r;
	r = length + obj.length;
	Square temp(r);
	return temp;
}
Square Square::operator * (Square obj) {
	float r;
	r = (length + obj.length) / 2;
	Square temp(r);
	return temp;
}