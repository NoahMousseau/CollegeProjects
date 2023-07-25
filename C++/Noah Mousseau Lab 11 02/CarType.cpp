#include "CarType.h"
void CarType::setManufacturer(string ma) {
	manufacturer = ma;
}
void CarType::setModel(string mo) {
	model = mo;
}
void CarType::setYear(int y) {
	year = y;
}
string CarType::getManufacturer() const {
	return manufacturer;
}
string CarType::getModel() const {
	return model;
}
int CarType::getYear() const {
	return year;
}
CarType::CarType(string ma, string mo, int y) : manufacturer(ma), model(mo),
year(y) {
}