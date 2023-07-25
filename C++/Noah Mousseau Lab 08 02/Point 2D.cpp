#include "Point 2D.h"
int Point2D::getX() const {
	return x;
}
int Point2D::getY() const {
	return y;
}
void Point2D::setX(int ax) {
	x = ax;
}
void Point2D::setY(int ay) {
	y = ay;
}
Point2D::Point2D(int ax, int ay) :x(ax), y(ay) {
}