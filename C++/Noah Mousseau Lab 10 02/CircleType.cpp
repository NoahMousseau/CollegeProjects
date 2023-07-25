#include "CircleType.h"

void CircleType::setRadius(float r) {
	radius = r;
}
float CircleType::getRadius() const {
	return radius;
}
float CircleType::getArea() const {
	return radius * radius * 3.14159;
}
CircleType::CircleType(float r) {
	setRadius(r);
}
CircleType operator + (CircleType obj1, CircleType obj2) {
	CircleType r;
	r.setRadius(obj1.getRadius() + obj2.getRadius());
	return r;
};
CircleType CircleType::operator - (CircleType obj) {
	CircleType r;
	r.setRadius(radius - obj.getRadius());
	return r;
};