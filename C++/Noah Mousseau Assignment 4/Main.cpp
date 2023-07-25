#include "ComputerClass.h"

int main() {
	Computer c1("GTX 1080", 16, 8);
	Computer c2("GTX 1060", 8, 4);
	Computer c3("GTX 1070", 16, 8);
	if (c1 == c2) {
		cout << "Computer 1 and Computer 2 have the same amount of cores and ram." << endl;
	}
	else {
		cout << "Computer 1 and Computer 2 have dissimilar amounts of cores and ram." << endl;
	}
	if (c1 == c3) {
		cout << "Computer 1 and Computer 3 have the same amount of cores and ram." << endl;
	}
	else {
		cout << "Computer 1 and Computer 3 have dissimilar amounts of cores and ram." << endl;
	}
	cout << "The combined amount of cores and ram of all computers is: " << endl;
	Computer temp;
	temp = c1 + c2 + c3;
	cout << temp << endl;
}