#include "BankAccount.h"

void BankAccount::setId(int i) {
	id = i;
}
void BankAccount::setFirstname(string f) {
	firstname = f;
}
void BankAccount::setLastname(string l) {
	lastname = l;
}
void BankAccount::setBalance(float b) {
	balance = b;
}
int BankAccount::getId() const {
	return id;
}
string BankAccount::getFirstname() const {
	return firstname;
}
string BankAccount::getLastname() const {
	return lastname;
}
float BankAccount::getBalance() const {
	return balance;
}
BankAccount::BankAccount(int i, string f, string l, float b) {
	setId(i);
	setFirstname(f);
	setLastname(l);
	setBalance(b);
}
bool BankAccount::operator!=(const BankAccount b) const {
	// TRUE if this object's id is different than the b object's id
	return this->getId() != b.getId();
}
bool operator>(const BankAccount b0, const BankAccount b1) {
	return b0.getBalance() > b1.getBalance();
}
bool BankAccount::operator ==(const BankAccount b) const {
	if (id == b.getId()) {
		return true;
	}
	else {
		return false;
	}
};
bool BankAccount::operator >=(const BankAccount b) const {
	if (balance >= b.getBalance()) {
		return true;
	}
	else {
		return false;
	}
};
bool BankAccount::operator <=(const BankAccount b) const {
	if (balance <= b.getBalance()) {
		return true;
	}
	else {
		return false;
	}
};