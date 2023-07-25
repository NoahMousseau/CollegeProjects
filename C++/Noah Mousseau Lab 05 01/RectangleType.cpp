#include "ClassDeclarations.h"

int RectangleType::getX0() {
	return p0.getX();
};
int RectangleType::getY0() {
	return p0.getY();
};
int RectangleType::getX1() {
	return p1.getX();
};
int RectangleType::getY1() {
	return p1.getY();
};
int RectangleType::getWidth() {
	int y0 = getY0();
	int y1 = getY1();
	int width = abs(y1 - y0);
	return width;
};
int RectangleType::getLength() {
	int x0 = getX0();
	int x1 = getX1();
	int length = abs(x1 - x0);
	return length;
};
int RectangleType::getPerimeter() {
	int L2 = getLength() * 2;
	int W2 = getWidth() * 2;
	int per = L2 + W2;
	return per;
};
int RectangleType::getArea() {
	int area = getLength() * getWidth();
	return area;
};
RectangleType::RectangleType(int ax0, int ay0, int ax1, int ay1) : p0(ax0, ay0), p1(ax1, ay1) {
}