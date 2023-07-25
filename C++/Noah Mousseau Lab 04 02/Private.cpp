#include "ClassDeclarations.h"

void PrivateCircle::setRadius(float r) {
	//Radius must be 0 or greater
	if (r < 0) {
		radius = 0;
	}
	else {
		radius = r;
	}
};
float PrivateCircle::getRadius() const {
	return radius;
};
float PrivateCircle::getPerimeter() const {
	float peri = 2 * 3.14 * radius;
	return peri;
};
float PrivateCircle::getArea() const {
	float area = 3.14 * radius * radius;
	return area;
};
PrivateCircle::PrivateCircle(float r) {
	radius = r;
};

void PrivateCylinder::setHeight(float h) {
	//Height must be 0 or greater
	if (h < 0) {
		height = 0;
	}
	else {
		height = h;
	}
};
float PrivateCylinder::getHeight() const {
	return height;
};
float PrivateCylinder::getArea() const {
	float r = getRadius();
	float area = (2 * (3.14 * r * height)) + (2 * (3.14 * r * r));
	return area;
};
float PrivateCylinder::getVolume() const {
	float r = getRadius();
	float volume = 3.14 * r * r * height;
	return volume;
};
PrivateCylinder::PrivateCylinder(float r, float h) {
	setRadius(r);
	height = h;
};