#include <iostream>

using namespace std;

class ProtectedCircle {
protected:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getPerimeter() const;
	float getArea() const;
	ProtectedCircle(float r = 0);
};

class ProtectedCylinder : public ProtectedCircle {
protected:
	float height;
public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	ProtectedCylinder(float r = 0, float h = 0);
};

class PrivateCircle {
private:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getPerimeter() const;
	float getArea() const;
	PrivateCircle(float r = 0);
};

class PrivateCylinder : public PrivateCircle {
private:
	float height;
public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	PrivateCylinder(float r = 0, float h = 0);
};