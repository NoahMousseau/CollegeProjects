#include "CircleCylinder.h"

void Circle::setRadius(float r) {
	//Radius must be 0 or greater
	if (r < 0) {
		radius = 0;
	}
	else {
		radius = r;
	}
};
float Circle::getRadius() const {
	return radius;
};
float Circle::getArea() const {
	float area = 3.14 * radius * radius;
	return area;
};
Circle::Circle(float r) {
	radius = r;
};

void Cylinder::setHeight(float h) {
	//Height must be 0 or greater
	if (h < 0) {
		height = 0;
	}
	else {
		height = h;
	}
};
float Cylinder::getHeight() const {
	return height;
};
float Cylinder::getArea() const {
	float area = (2 * (3.14 * radius * height)) + (2 * (3.14 * radius * radius));
	return area;
};
float Cylinder::getVolume() const {
	float volume = 3.14 * radius * radius * height;
	return volume;
};
Cylinder::Cylinder(float r, float h) {
	radius = r;
	height = h;
};