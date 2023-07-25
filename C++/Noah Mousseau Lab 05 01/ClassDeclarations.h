#include <iostream>
#include <cmath>

using namespace std;

class Point2D {
private:
	int x;
	int y;
public:
	int getX();
	int getY();
	Point2D(int ax, int ay);
};

class RectangleType {
private:
	Point2D p0;
	Point2D p1;
public:
	int getX0();
	int getY0();
	int getX1();
	int getY1();
	int getWidth();
	int getLength();
	int getPerimeter();
	int getArea();
	RectangleType(int ax0, int ay0, int ax1, int ay1);
};