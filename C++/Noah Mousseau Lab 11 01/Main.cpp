#include "BankAccount.h"
#include <iostream>

using namespace std;

string ToF(bool input);

int main() {
	cout << "Bank acoount app!\n";
	cout << "---------------------\n";
	BankAccount ba0(1, "Mikasa", "Ackerman", 7000);
	BankAccount ba1(2, "Andy", "Scythia", 90000);
	cout << "Comparison: ba0 != ba1: " << ToF(ba0 != ba1) << endl;
	cout << "Comparison: ba0 > ba1: " << ToF(ba0 > ba1) << endl;
	cout << "Comparison: ba1 > ba0: " << ToF(ba1 > ba0) << endl;
	cout << "Comparison: ba0 == ba1: " << ToF(ba1 == ba0) << endl;
	cout << "Comparison: ba0 >= ba1: " << ToF(ba1 >= ba0) << endl;
	cout << "Comparison: ba1 <= ba0: " << ToF(ba1 <= ba0) << endl;
}

string ToF(bool input) {
	return input ? "True" : "False";
};