#include "Edge.h"
void Edge::setP0(Point2D* ptr0) {
	p0 = ptr0;
}
void Edge::setP1(Point2D* ptr1) {
	p1 = ptr1;
}
Point2D* Edge::getP0() const {
	return p0;
}
Point2D* Edge::getP1() const {
	return p1;
}