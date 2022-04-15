#ifndef _VENDING_MACHINE_FACTORY_H_
#define _VENDING_MACHINE_FACTORY_H_

#include <iostream>
#include <cstring>
#include "Item.h"
#include "MilkBottle.h"
#include "Chocolate.h"
#include "Biscuit.h"

using namespace std;

class VendingMachineFactory
{
private:
	//Item * item;
public:
	Item * getItem();
};

#endif