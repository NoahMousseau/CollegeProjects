//Header guards, to stop class redefinition errors
#ifndef SquareClass_H
#define SquareClass_H

class Square {
private:
	float length;
public:
	void setLength(float le);
	float getLength() const;
	float getArea() const;
	Square(float le = 0);
};

//End of header guard
#endif