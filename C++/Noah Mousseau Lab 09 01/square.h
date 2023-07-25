#include "shape.h"

class Square : public Shape {
private:
	float length;
public:
	void setLength(float l);
	float getLength() const;
	float getArea() const;
};