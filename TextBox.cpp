#include "TextBox.h"
#include <iostream>

using namespace std;

TextBox::TextBox(string value):value{value}
{
}

string TextBox::getValue()
{
	return value;
}

void TextBox::setValue(string value)
{
	this->value = value;
}
