#include "FunctionDeclaration.h"

void calculateCirclePerimeterStruct(struct CircleStr &circle) {
	float r = circle.radius;
	float per = 2 * 3.14 * r;
	circle.perimeter = per;
};
void calculateCircleAreaStruct(struct CircleStr &circle) {
	float r = circle.radius;
	float area = 3.14 * r * r;
	circle.area = area;
};