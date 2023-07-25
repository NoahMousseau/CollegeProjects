#pragma once
#include <string>

using namespace std;

class Student {
private:
	string firstName;
	string lastName;
public:
	void setFirstName(string f);
	void setLastName(string l);
	string getFirstName() const;
	string getLastName() const;
	Student(string f, string l);
	Student();
};