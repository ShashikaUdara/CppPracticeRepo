#ifndef _TELEVISION_BUTTON_H_
#define _TELEVISION_BUTTON_H_

#include <iostream>
#include "Button.h"

using namespace std;

class TelevisionButtons : public Button
{
public:
	TelevisionButtons()
	{
		cout<<"Creating the Television Buttons"<<endl;
	}
	void pushButtons()
	{
		cout<<"Pushing Television Buttons"<<endl;
	}
};

#endif