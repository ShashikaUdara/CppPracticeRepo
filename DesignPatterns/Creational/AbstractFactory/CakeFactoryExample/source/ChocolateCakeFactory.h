#ifndef _CHOCOLATE_CAKE_FACTORY_H_
#define _CHOCOLATE_CAKE_FACTORY_H_

#include <iostream>
#include <cstring>
#include "ChocolateCream.h"
#include "ChocolateBread.h"
#include "CakeFactory.h"

using namespace std;

class ChocolateCakeFactory : public CakeFactory
{
public:
	Cream * makeCream()
	{
		return new ChocolateCream;
	}

	Bread * makeBread()
	{
		return new ChocolateBread;
	}

};

#endif