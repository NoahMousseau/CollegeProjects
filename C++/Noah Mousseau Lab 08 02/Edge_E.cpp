#include "Edge_E.h"
#include <cmath>

float Edge_E::getDistance() const {
	Point2D* temp1 = getP0();
	Point2D* temp2 = getP1();
	int x0 = temp1->getX();
	int y0 = temp1->getY();
	int x1 = temp2->getX();
	int y1 = temp2->getY();
	float distance = sqrt((x0 - x1) ^ 2 + (y0 - y1) ^ 2);
	return distance;
};