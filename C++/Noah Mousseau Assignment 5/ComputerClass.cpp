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

/*
Computer::~Computer() {
	cout << "A computer object has been removed from memory.";
}
*/