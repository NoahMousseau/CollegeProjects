#include "InvalidMeasureException.h"
#include "Rectangle.h"

using namespace std;

int main() {
	try {
		Rectangle r1(-2.0, 1.0);
		Rectangle r2(2.0, -1.0);
	}
	catch (InvalidMeasureException error) {
		error.what();
	}
}