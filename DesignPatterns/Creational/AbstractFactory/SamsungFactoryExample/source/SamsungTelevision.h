#ifndef _SAMSUNG_TELEVISION_H_
#define _SAMSUNG_TELEVISION_H_

#include <iostream>
#include "SamsungFactory.h"
#include "TelevisionVolumnController.h"
#include "TelevisionButtons.h"
#include "TelevisionSpeakers.h"

using namespace std;

class SamsungTelevision : public SamsungFactory
{
public:
	SamsungTelevision()
	{
		strcpy(_itemName, "Samsung Television");
		cout<<"Creating the Samsung Television"<<endl;
	}
	VolumnController * addVolumnController();
	Button * addButtons();
	Speaker * addSpeakers();
	char * getItemName();
};

#endif