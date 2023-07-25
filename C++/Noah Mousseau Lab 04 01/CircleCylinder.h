#include <iostream>

using namespace std;

class Circle {
protected:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getArea() const;
	Circle(float r = 0);
};

class Cylinder : public Circle {
private:
	float height;
public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	Cylinder(float r = 0, float h = 0);
};