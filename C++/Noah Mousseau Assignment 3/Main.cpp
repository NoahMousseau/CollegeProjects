#include "ComputerClass.h"

//Noah Mousseau

int main() {
	//Pointer to object class
	Computer* cPtr;
	//Dynamic object
	cPtr = new Computer;
	//Set variables to use for user input
	int cpuCores;
	int ramAmount;
	string cardModel;
	//Get user input
	cout << "Specify number of CPU cores: ";
	cin >> cpuCores;
	cout << "Specify amount of RAM (in GB): ";
	cin >> ramAmount;
	cout << "Specify card model (of Nvidia branding): ";
	cin >> cardModel;
	//To access and set class members through 'cPtr':
	cPtr->setCpuCores(cpuCores);
	cPtr->setRamAmountGB(ramAmount);
	cPtr->setNvidiaCard(cardModel);
	//Display class members:
	cout << "CPU core amount: " << cPtr->getCpuCoresAmount() << endl;
	cout << "Ram Amount (in GB): " << cPtr->getRamAmountGB() << endl;
	cout << "Card model (Nvidia brand): " << cPtr->getNvidiaCardModel() << endl;
}