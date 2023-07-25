#include "ClassDeclarations.h"

void ProtectedCircle::setRadius(float r) {
	//Radius must be 0 or greater
	if (r < 0) {
		radius = 0;
	}
	else {
		radius = r;
	}
};
float ProtectedCircle::getRadius() const {
	return radius;
};
float ProtectedCircle::getPerimeter() const {
	float peri = 2 * 3.14 * radius;
	return peri;
};
float ProtectedCircle::getArea() const {
	float area = 3.14 * radius * radius;
	return area;
};
ProtectedCircle::ProtectedCircle(float r) {
	radius = r;
};

void ProtectedCylinder::setHeight(float h) {
	//Height must be 0 or greater
	if (h < 0) {
		height = 0;
	}
	else {
		height = h;
	}
};
float ProtectedCylinder::getHeight() const {
	return height;
};
float ProtectedCylinder::getArea() const {
	float area = (2 * (3.14 * radius * height)) + (2 * (3.14 * radius * radius));
	return area;
};
float ProtectedCylinder::getVolume() const {
	float volume = 3.14 * radius * radius * height;
	return volume;
};
ProtectedCylinder::ProtectedCylinder(float r, float h) {
	radius = r;
	height = h;
};