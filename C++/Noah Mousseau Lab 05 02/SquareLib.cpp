#include "SquareLib.h"

Square doubleLength_1(Square s) {
	float le = s.getLength() * 2;
	s.setLength(le);
	return s;
};
void doubleLength_2(Square &s) {
	float le = s.getLength() * 2;
	s.setLength(le);
};
void doubleLength_3(Square *s) {
	float le = s->getLength() * 2;
	//Above line is equal to: float le = *s.getLength() * 2;
	s->setLength(le);
};