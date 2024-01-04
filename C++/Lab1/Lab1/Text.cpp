
#include "Text.h"

Text::Text ( const char *charSeq )
{
	bufferSize = strlen(charSeq) + 1;
	
}

Text::Text ( const Text &other )
{
	bufferSize = other.bufferSize;
}

void Text::operator = ( const Text &other )
{
}

Text::~Text ()
{
}

int Text::getLength () const
{
	return -1;
}

char Text::operator [] ( int n ) const
{
	return 0;
}

void Text::clear ()
{
}

void Text::showStructure () const
{
}

Text Text::toUpper( ) const
{
	Text temp;
	return temp;
}

Text Text::toLower( ) const
{
	Text temp;
	return temp;
}

bool Text::operator == ( const Text& other ) const
{
	return false;
}

bool Text::operator <  ( const Text& other ) const
{
	return false;
}

bool Text::operator >  ( const Text& other ) const
{
	return false;
}
