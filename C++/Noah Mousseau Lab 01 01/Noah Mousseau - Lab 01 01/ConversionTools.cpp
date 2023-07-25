#include "ConversionTools.h"

float ftoc(float f) {
	float celcius;
	celcius = (f - 32) * 0.5556;
	return celcius;
}

float ctof(float c) {
	float fahrenheit;
	fahrenheit = (c * 1.8) + 32;
	return fahrenheit;
}