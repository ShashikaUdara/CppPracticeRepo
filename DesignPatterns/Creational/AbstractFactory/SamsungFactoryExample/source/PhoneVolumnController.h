#ifndef _PHONE_VOLUMN_CONTROLLER_H_
#define _PHONE_VOLUMN_CONTROLLER_H_

#include <iostream>
#include "VolumnController.h"

using namespace std;

class PhoneVolumnController : public VolumnController
{
public:
	PhoneVolumnController()
	{
		cout<<"Creating the Phone Volumn Controller"<<endl;
	}
	void checkVolumn()
	{
		cout<<"Checking Phone Volumn Controller"<<endl;
	}
};

#endif