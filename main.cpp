#include "TextBox.h"
#include <iostream>

using namespace std;

int main()
{
    TextBox box;
    box.setValue("Hello world");
    string msg = box.getValue();

    cout << msg;
    
}
