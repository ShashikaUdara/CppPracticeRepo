#ifndef _ELECTRIC_CAR_DOOR_H_
#define _ELECTRIC_CAR_DOOR_H_

#include <iostream>
#include "Door.h"

using namespace std;

class ElectricCarDoor:public Door
{
public:
	ElectricCarDoor()
	{
		cout<<"Creating Electric Car Door."<<endl;
	}
	// pure virtual fucntion overrides here
	void open()
	{
		cout<<"Electric car door opens quitly."<<endl;
	}
};

#endif