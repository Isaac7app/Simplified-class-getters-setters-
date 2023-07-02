#include "TextBox.h"
#include <iostream>

using namespace std;

string TextBox::getValue()
{
	return value;
}

void TextBox::setValue(string value)
{
	this->value = value;
}
