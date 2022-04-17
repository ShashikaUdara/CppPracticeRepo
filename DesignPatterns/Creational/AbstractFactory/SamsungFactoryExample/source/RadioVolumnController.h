#ifndef _RADIO_VOLUMN_CONTROLLER_H_
#define _RADIO_VOLUMN_CONTROLLER_H_

#include <iostream>
#include "VolumnController.h"

using namespace std;

class RadioVolumnController : public VolumnController
{
public:
	RadioVolumnController()
	{
		cout<<"Creating the Radio Volumn Controller"<<endl;
	}
	void checkVolumn()
	{
		cout<<"Checking Radio Volumn Controller"<<endl;
	}
};

#endif