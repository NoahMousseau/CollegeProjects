#pragma once
#include <iostream>

using namespace std;

class Computer {
private:
	int RamAmountGB, CpuCores;
	string NvidiaCard;
public:
	void setCpuCores(int coreAmount);
	void setRamAmountGB(int ramAmountGB);
	void setNvidiaCard(string card);
	int getCpuCoresAmount() const;
	int getRamAmountGB() const;
	string getNvidiaCardModel() const;
	Computer();
	Computer(string card, int ramAmountGB, int coreAmount);

	int operator>(Computer const& obj) {
		if (RamAmountGB < obj.getRamAmountGB()) {
			return RamAmountGB;
		}
		else {
			return obj.getRamAmountGB();
		}
	};

	int operator<(Computer const& obj) {
		if (RamAmountGB > obj.getRamAmountGB()) {
			return RamAmountGB;
		}
		else {
			return obj.getRamAmountGB();
		}
	};

	friend ostream& operator<<(ostream& os, Computer obj) {
		os << obj.getRamAmountGB();
		return os;
	};
};