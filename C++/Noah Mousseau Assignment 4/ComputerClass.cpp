//Noah Mousseau
//Source file for Assignment 1

#include "ComputerClass.h"

void Computer::setCpuCores(int coreAmount) {
	if (coreAmount > 32) {
		CpuCores = 32;
	}
	else if (coreAmount < 2) {
		CpuCores = 2;
	}
}

void Computer::setRamAmountGB(int ramAmountGB) {
	RamAmountGB = ramAmountGB;
}

void Computer::setNvidiaCard(string card) {
	NvidiaCard = card;
}

int Computer::getCpuCoresAmount() const {
	return CpuCores;
}

int Computer::getRamAmountGB() const {
	return RamAmountGB;
}

string Computer::getNvidiaCardModel() const {
	return NvidiaCard;
}

Computer::Computer() {
	RamAmountGB = 16;
	CpuCores = 16;
	NvidiaCard = "1080ti";
}

Computer::Computer(string card, int ramAmountGB, int coreAmount) {
	RamAmountGB = ramAmountGB;
	CpuCores = coreAmount;
	NvidiaCard = card;
}

Computer::~Computer() {
	cout << "A computer object has been removed from memory." << endl;
}

//Adds together two computer amounts of ram and cpu cores, then returns an object that contains the total amounts
Computer Computer::operator + (Computer const& obj) {
	Computer temp;
	temp.CpuCores = CpuCores + obj.CpuCores;
	temp.RamAmountGB = RamAmountGB + obj.RamAmountGB;
	return temp;
};

//Checks to see if two computer objects have similar amounts of ram and cpu cores, then returns true or false
bool Computer::operator == (Computer const& obj) {
	if (obj.CpuCores == CpuCores && obj.RamAmountGB == RamAmountGB) {
		return true;
	}
	else {
		return false;
	}
};

//Prints the amount of cpu cores and ram amount in an object
ostream& operator << (ostream& out, const Computer& obj) {
	out << "Computer core amount is " << obj.CpuCores << "\n" << "Computer ram amount is " << obj.RamAmountGB << "\n";
	return out;
};