#pragma once
#include "Point 2D.h"
class Edge {
private:
	Point2D* p0, * p1;
public:
	void setP0(Point2D* ptr0);
	void setP1(Point2D* ptr1);
	Point2D* getP0() const;
	Point2D* getP1() const;
	virtual float getDistance() const = 0;
};