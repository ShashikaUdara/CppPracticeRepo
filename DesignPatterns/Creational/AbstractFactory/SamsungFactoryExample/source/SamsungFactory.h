#ifndef _SAMSUNG_FACTORY_H_
#define _SAMSUNG_FACTORY_H_

#include <iostream>
#include <cstring>
#include "VolumnController.h"
#include "Button.h"
#include "Speaker.h"

using namespace std;

class SamsungFactory
{
protected:
	char _itemName[15];
public:
	SamsungFactory() {}
	virtual VolumnController * addVolumnController() = 0;
	virtual Button * addButtons() = 0;
	virtual Speaker * addSpeakers() = 0;
	virtual char * getItemName() = 0;
};

#endif