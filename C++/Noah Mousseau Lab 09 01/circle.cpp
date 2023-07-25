#include "circle.h"

void Circle::setRadius(float r) {
	radius = r;
};
float Circle::getRadius() const {
	return radius;
};
float Circle::getArea() const {
	float area =  radius;
	area = area * radius;
	area = area * 3.1415926;
	return area;
};