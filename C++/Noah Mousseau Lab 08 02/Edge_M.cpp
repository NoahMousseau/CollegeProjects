#include "Edge_M.h"
#include <cmath>

float Edge_M::getDistance() const {
	Point2D* temp1 = getP0();
	Point2D* temp2 = getP1();
	int x0 = temp1->getX();
	int y0 = temp1->getY();
	int x1 = temp2->getX();
	int y1 = temp2->getY();
	float distance = abs(x0-x1)+abs(y0-y1);
	return distance;
}

