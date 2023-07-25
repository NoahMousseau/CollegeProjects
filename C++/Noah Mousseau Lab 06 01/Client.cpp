#include "Client.h"

void Client::setUsername(string u) {
	username = u;
};
void Client::setCheckingBalance(float cb) {
	if (cb < 1) {
		checkingBalance = 1;
	}
	else {
		checkingBalance = cb;
	}
};
void Client::setSavingsBalance(float sb) {
	if (sb < 1) {
		savingsBalance = 1;
	}
	else {
		savingsBalance = sb;
	}
};
string Client::getUsername() const {
	return username;
};
float Client::getCheckingBalance() const {
	return checkingBalance;
};
float Client::getSavingsBalance() const {
	return savingsBalance;
};
Client::Client(string u, float cb, float sb) {
	username = u;
	checkingBalance = cb;
	savingsBalance = sb;
};