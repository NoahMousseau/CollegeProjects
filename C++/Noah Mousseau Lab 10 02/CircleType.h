#pragma once

class CircleType {
private:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getArea() const;
	CircleType(float r = 0);
	friend CircleType operator + (CircleType obj1, CircleType obj2);
	CircleType operator - (CircleType obj);
};