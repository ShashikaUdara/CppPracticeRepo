#ifndef _ELECTRIC_CAR_FACTORY_H_
#define _ELECTRIC_CAR_FACTORY_H_

#include <iostream>
#include "CarFactory.h"
#include "ElectricCarDoor.h"
#include "ElectricEngine.h"

using namespace std;

class ElectricCarFactory:public CarFactory
{
public:
	Door * buildDoor()
	{
		return new ElectricCarDoor;
	}

	Engine * buildEngine()
	{
		return new ElectricEngine;
	}
};

#endif