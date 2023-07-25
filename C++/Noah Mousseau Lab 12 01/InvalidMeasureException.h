#pragma once
#include <string>

using namespace std;

class InvalidMeasureException {
private:
	string message;
public:
	string what() const;
	InvalidMeasureException(string _measure);
};