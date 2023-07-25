#include <iostream>

using namespace std;

class Client {
private:
	string username;
	float checkingBalance;
	float savingsBalance;
public:
	void setUsername(string u);
	void setCheckingBalance(float cb);
	void setSavingsBalance(float sb);
	string getUsername() const;
	float getCheckingBalance() const;
	float getSavingsBalance() const;
	Client(string u = "", float cb = 0, float sb = 0);
};