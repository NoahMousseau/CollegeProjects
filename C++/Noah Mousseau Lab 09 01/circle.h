#include "shape.h"

class Circle : public Shape {
private:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getArea() const;
};