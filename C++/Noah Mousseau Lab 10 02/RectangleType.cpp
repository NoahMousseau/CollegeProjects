#include "RectangleType.h"

void RectangleType::setLength(float l) {
	length = l;
}
void RectangleType::setWidth(float w) {
	width = w;
}
float RectangleType::getLength() const {
	return length;
}
float RectangleType::getWidth() const {
	return width;
}
float RectangleType::getArea() const {
	return getLength() * getWidth();
}
RectangleType::RectangleType(float l, float w) {
	setLength(l);
	setWidth(w);
}
RectangleType RectangleType::operator + (RectangleType obj) {
	RectangleType r;
	r.setLength(length + obj.getLength());
	r.setWidth(width + obj.getWidth());
	return r;
};
RectangleType operator - (RectangleType obj1, RectangleType obj2) {
	RectangleType r;
	r.setLength(obj1.getLength() - obj2.getLength());
	r.setWidth(obj1.getWidth() - obj2.getWidth());
	return r;
};