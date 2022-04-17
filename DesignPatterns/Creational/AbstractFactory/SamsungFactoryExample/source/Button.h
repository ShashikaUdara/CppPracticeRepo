#ifndef _BUTTON_H_
#define _BUTTON_H_

#include <iostream>

using namespace std;

class Button
{
public:
	Button(){}
	virtual void pushButtons() = 0;
};

#endif