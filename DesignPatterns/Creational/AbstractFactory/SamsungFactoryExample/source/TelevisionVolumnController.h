#ifndef _TELEVISION_VOLUMN_CONTROLLER_H_
#define _TELEVISION_VOLUMN_CONTROLLER_H_

#include <iostream>
#include "VolumnController.h"

using namespace std;

class TelevisionVolumnController : public VolumnController
{
public:
	TelevisionVolumnController()
	{
		cout<<"Creating the Television Volumn Controller"<<endl;
	}
	void checkVolumn()
	{
		cout<<"Checking Television Volumn Controller"<<endl;
	}
};

#endif