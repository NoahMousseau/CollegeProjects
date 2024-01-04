
//Noah Mousseau

#include "Text.h"

Text::Text(const char* charSeq)
{
	bufferSize = strlen(charSeq) + 1;
	buffer = new char[bufferSize];
	memcpy(buffer, charSeq, bufferSize * sizeof(char));
}

Text::Text(const Text& other)
{
	bufferSize = other.bufferSize;
	buffer = new char[bufferSize];
	memcpy(buffer, other.buffer, bufferSize * sizeof(char));
}

void Text::operator = (const Text& other)
{
	if (other.bufferSize > bufferSize) {
		bufferSize = other.bufferSize;
		delete buffer;
		buffer = new char[bufferSize];
	}
	memcpy(buffer, other.buffer, bufferSize * sizeof(char));
}

Text::~Text()
{
	delete buffer;
}

int Text::getLength() const
{
	return bufferSize - 1;
}

char Text::operator [] (int n) const
{
	return buffer[n];
}

void Text::clear()
{
	for (int i = 0; i < bufferSize; i++) {
		buffer[i] = 0;
	}
}

void Text::showStructure() const
{
	for (int i = 0; i < bufferSize; i++) {
		cout << buffer[i];
	}
	cout << endl;
}

Text Text::toUpper() const
{
	Text temp = *this;
	for (int i = 0; i < bufferSize; i++) {
		if (temp.buffer[i] > 90) {
			temp.buffer[i] -= 32;
		}
	}
	return temp;
}

Text Text::toLower() const
{
	Text temp = *this;
	for (int i = 0; i < bufferSize; i++) {
		if (temp.buffer[i] < 91) {
			temp.buffer[i] += 32;
		}
	}
	return temp;
}

bool Text::operator == (const Text& other) const
{
	return strcmp(buffer, other.buffer) == 0;
}

bool Text::operator <  (const Text& other) const
{
	return strcmp(buffer, other.buffer) < 0;
}

bool Text::operator >  (const Text& other) const
{
	return strcmp(buffer, other.buffer) > 0;
}

istream& operator >> (istream& input, Text& inputText) {
	return input;
};

ostream& operator << (ostream& output, const Text& outputText) {
	for (int i = 0; i < outputText.bufferSize; i++) {
		cout << outputText.buffer[i];
	}
	return output;
};