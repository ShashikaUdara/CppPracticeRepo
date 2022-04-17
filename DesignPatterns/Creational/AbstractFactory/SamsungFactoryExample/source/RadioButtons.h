#ifndef _RADIO_BUTTON_H_
#define _RADIO_BUTTON_H_

#include <iostream>
#include "Button.h"

using namespace std;

class RadioButtons : public Button
{
public:
	RadioButtons()
	{
		cout<<"Creating the Radio Buttons"<<endl;
	}
	void pushButtons()
	{
		cout<<"Pushing Radio Buttons"<<endl;
	}
};

#endif