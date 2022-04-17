#ifndef _TELEVISION_BUTTON_H_
#define _TELEVISION_BUTTON_H_

#include <iostream>
#include "Button.h"

using namespace std;

class PhoneButtons : public Button
{
public:
	PhoneButtons()
	{
		cout<<"Creating the Phone Buttons"<<endl;
	}
	void pushButtons()
	{
		cout<<"Pushing Phone Buttons"<<endl;
	}
};

#endif