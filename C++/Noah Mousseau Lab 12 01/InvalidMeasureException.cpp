#include "InvalidMeasureException.h"

string InvalidMeasureException::what() const {
	return message;
};
InvalidMeasureException::InvalidMeasureException(string _measure) {
	message = _measure;
};