#pragma once
class Rectangle {
private:
	double length;
	double width;
public:
	void setLength(double _length);
	void setWidth(double _width);
	double getLength() const;
	double getWidth() const;
	Rectangle(double _length = 1, double _width = 1);
};