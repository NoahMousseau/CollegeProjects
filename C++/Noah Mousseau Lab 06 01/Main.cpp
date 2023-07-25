#include "Client.h"

int main() {

	Client* c1;
	Client* c2;
	c1 = new Client;
	c2 = c1;

	cout << "Lab 0601!\n";
	cout << "------------\n";
	cout << "Enter client's name: ";
	string user;
	cin >> user;
	cout << "Enter intial checking balance: ";
	float check;
	cin >> check;
	cout << "Enter initial savings balance: ";
	float save;
	cin >> save;

	c1->setUsername(user);
	c1->setCheckingBalance(check);
	c1->setSavingsBalance(save);

	cout << "Client's name: " << c2->getUsername() << endl;
	cout << "Checking balance: " << c2->getCheckingBalance() << endl;
	cout << "Savings balance: " << c2->getSavingsBalance() << endl;
}