#ifndef _CAKE_FACTORY_H_
#define _CAKE_FACTORY_H_

#include <iostream>
#include "Bread.h"
#include "Cream.h"

using namespace std;

class CakeFactory
{
public:
	virtual Cream * makeCream() = 0;
	virtual Bread * makeBread() = 0;
};

#endif