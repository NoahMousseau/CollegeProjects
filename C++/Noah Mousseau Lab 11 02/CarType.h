#pragma once
#include <string>
using namespace std;
class CarType {
private:
	string manufacturer;
	string model;
	int year;
public:
	void setManufacturer(string ma);
	void setModel(string mo);
	void setYear(int y);
	string getManufacturer() const;
	string getModel() const;
	int getYear() const;
	CarType(string ma = "", string mo = "", int y = 1950);
};