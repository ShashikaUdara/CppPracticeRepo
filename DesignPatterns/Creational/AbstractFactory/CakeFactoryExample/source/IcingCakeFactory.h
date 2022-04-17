#ifndef _ICING_CAKE_FACTORY_H_
#define _ICING_CAKE_FACTORY_H_

#include <iostream>
#include <cstring>
#include "CakeFactory.h"
#include "IcingCream.h"
#include "VanilaBread.h"

using namespace std;

class IcingCakeFactory : public CakeFactory
{
public:
	Cream * makeCream()
	{
		return new IcingCream;
	}

	Bread * makeBread()
	{
		return new VanilaBread;
	}
};

#endif