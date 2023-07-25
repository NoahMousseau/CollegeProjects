#pragma once

class RectangleType {
private:
	float length, width;
public:
	void setLength(float l);
	void setWidth(float w);
	float getLength() const;
	float getWidth() const;
	float getArea() const;
	RectangleType(float l = 0, float w = 0);
	RectangleType operator + (RectangleType obj);
	friend RectangleType operator - (RectangleType obj1, RectangleType obj2);
};