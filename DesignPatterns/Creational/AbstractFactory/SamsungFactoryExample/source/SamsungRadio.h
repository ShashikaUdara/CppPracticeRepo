#ifndef _SAMSUNG_RADIO_H_
#define _SAMSUNG_RADIO_H_

#include <iostream>
#include "SamsungFactory.h"
#include "RadioVolumnController.h"
#include "RadioButtons.h"
#include "RadioSpeakers.h"

using namespace std;

class SamsungRadio : public SamsungFactory
{
public:
	SamsungRadio()
	{
		strcpy(_itemName, "Samsung Radio");
		cout<<"Creating the Samsung Radio"<<endl;
	}
	VolumnController * addVolumnController();
	Button * addButtons();
	Speaker * addSpeakers();
	char * getItemName();
};

#endif