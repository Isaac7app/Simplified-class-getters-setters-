#ifndef TEXBOX_H
#define TEXBOX_H

#include <string>

using namespace std;

class TextBox
{
public:
	TextBox() = default;
	explicit TextBox(const string& value);

	string getValue();
	void setValue(string value);

private: 
	string value;
};

#endif // TEXBOX_H


