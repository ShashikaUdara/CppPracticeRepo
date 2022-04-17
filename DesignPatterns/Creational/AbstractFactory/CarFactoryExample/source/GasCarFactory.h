#ifndef _GAS_CAR_FACTORY_H_
#define _GAS_CAR_FACTORY_H_

#include <iostream>
#include "CarFactory.h"
#include "GasCarDoor.h"
#include "GasEngine.h"

using namespace std;

class GasCarFactory:public CarFactory
{
public:
	Door * buildDoor()
	{
		return new GasCarDoor;
	}

	Engine * buildEngine()
	{
		return new GasEngine;
	}
};

#endif