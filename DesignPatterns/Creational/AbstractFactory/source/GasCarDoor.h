#ifndef _GAS_CAR_DOOR_H_
#define _GAS_CAR_DOOR_H_

#include <iostream>
#include "Door.h"

using namespace std;

class GasCarDoor:public Door
{
public:
	GasCarDoor()
	{
		cout<<"Creating Gas Car Door."<<endl;
	}
	// pure virtual fucntion overrides here
	void open()
	{
		cout<<"Gas car door opens loudly."<<endl;
	}
};

#endif