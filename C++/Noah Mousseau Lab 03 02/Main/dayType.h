#include <iostream>

using namespace std;

class dayType {
private:
	//Array to store names of days
	string dayArr[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	//int to store array location of day
	int day;
	//string to store name of day
	string dayOfWeek;
public:
	//Function declarations
	void setDay(int d);
	void printDay();
	string getDay();
	string getNextDay();
	string getLastDay();
	string calculateDay(int dPlus);
	dayType();
	dayType(int d);
	dayType(string d);
	~dayType();
};