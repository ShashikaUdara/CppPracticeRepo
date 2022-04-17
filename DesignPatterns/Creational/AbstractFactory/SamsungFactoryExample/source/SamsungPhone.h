#ifndef _SAMSUNG_PHONE_H_
#define _SAMSUNG_PHONE_H_

#include <iostream>
#include "SamsungFactory.h"
#include "PhoneVolumnController.h"
#include "PhoneButtons.h"
#include "PhoneSpeakers.h"

using namespace std;

class SamsungPhone : public SamsungFactory
{
public:
	SamsungPhone()
	{
		strcpy(_itemName, "Samsung Phone");
		cout<<"Creating the Samsung Phone"<<endl;
	}
	VolumnController * addVolumnController();
	Button * addButtons();
	Speaker * addSpeakers();
	char * getItemName();
};

#endif