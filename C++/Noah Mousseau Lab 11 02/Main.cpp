#include "CarType.h"
#include "DynamicArray.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Dynamic Array!\n";
	cout << "------------------\n";

	DynamicArray<int> da(4);
	da.addElement(10);
	da.addElement(5);
	da.addElement(7);
	for (int i = 0; i < da.getSize(); i++) {
		cout << "Element: " << da.getElement(i) << endl;
	}

	DynamicArray<CarType> ca(4);
	CarType chevy("Chevy", "Truck", 1980);
	CarType chrysler("Chrysler", "Van", 1980);
	CarType kia("Kia", "Suburban", 1980);
	ca.addElement(chevy);
	ca.addElement(chrysler);
	ca.addElement(kia);
	for (int i = 0; i < ca.getSize(); i++) {
		cout << "Element: " << (ca.getElement(i)).getManufacturer() << endl;
	}
}