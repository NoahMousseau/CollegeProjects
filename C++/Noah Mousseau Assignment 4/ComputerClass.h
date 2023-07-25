//Noah Mousseau
//Header file for Assignment 1

#include <iostream>
#include <string>

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
	~Computer();
	Computer operator + (Computer const& obj);
	bool operator == (Computer const& obj);
	friend ostream& operator << (ostream& out, const Computer& c);
};