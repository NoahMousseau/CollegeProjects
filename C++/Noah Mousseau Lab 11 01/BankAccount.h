#pragma once
#include <string>

using namespace std;
class BankAccount {
private:
	int id;
	string firstname, lastname;
	float balance;
public:
	void setId(int i);
	void setFirstname(string f);
	void setLastname(string l);
	void setBalance(float b);
	int getId() const;
	string getFirstname() const;
	string getLastname() const;
	float getBalance() const;
	BankAccount(int i, string f, string l, float b);
	bool operator!=(const BankAccount b) const;
	friend bool operator>(const BankAccount b0, const BankAccount b1);
	bool operator ==(const BankAccount b) const;
	bool operator >=(const BankAccount b) const;
	bool operator <=(const BankAccount b) const;
};