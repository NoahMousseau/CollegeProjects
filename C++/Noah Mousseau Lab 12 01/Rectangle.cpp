#include "Rectangle.h"
#include "InvalidMeasureException.h"

// Define the rectangle's length. Valid values between 1 and 50, inclusive
void Rectangle::setLength(double _length) {
	if (_length >= 1 && _length <= 50) {
		length = _length;
	}
	else if (_length < 1 || _length > 50) {
		InvalidMeasureException error("_length");
		throw error;
	}
}

// Define the rectangle's width. Valid values between 1 and 20, inclusive
void Rectangle::setWidth(double _width) {
	if (_width >= 1 && _width <= 20) {
		width = _width;
	}
	else if (_width < 1 || _width > 20) {
		InvalidMeasureException error("_width");
		throw error;
	}
}

double Rectangle::getLength() const {
	return length;
}
double Rectangle::getWidth() const {
	return width;
}
Rectangle::Rectangle(double _length, double _width) {
	setLength(_length);
	setWidth(_width);
}