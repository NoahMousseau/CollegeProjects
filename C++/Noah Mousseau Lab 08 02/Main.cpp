#include "Point 2D.h"
#include "Edge.h"
#include "Edge_E.h"
#include "Edge_M.h"
#include <iostream>
using namespace std;

int main() {
	Point2D *p1 = new Point2D(1, 4);
	Point2D *p2 = new Point2D(2, 8);
	Edge_E eE;
	Edge_M eM;
	eE.setP0(p1);
	eE.setP1(p2);
	eM.setP0(p1);
	eM.setP1(p2);
	cout << "Values of Point 1: \n";
	cout << "x = " << p1->getX() << " y = " << p1->getY() << endl;
	cout << "Values of Point 2: \n";
	cout << "x = " << p2->getX() << " y = " << p2->getY() << endl;
	cout << "\n";
	cout << "Distance of Edge_E: " << eE.getDistance() << endl;
	cout << "Distance of Edge_M: " << eM.getDistance() << endl;
}