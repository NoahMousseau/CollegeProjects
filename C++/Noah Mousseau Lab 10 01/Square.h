#pragma once
class Square {
private:
	float length;
public:
	void setLength(float l);
	float getLength() const;
	float getArea() const;
	Square(float l);
	Square();
	Square operator + (Square obj);
	Square operator * (Square obj);
};