#ifndef _CAR_FACTORY_H_
#define _CAR_FACTORY_H_

#include <iostream>
#include "Door.h"
#include "Engine.h"

using namespace std;

class CarFactory
{
public:
	virtual Door * buildDoor() = 0;
	virtual Engine * buildEngine() = 0;
};

#endif