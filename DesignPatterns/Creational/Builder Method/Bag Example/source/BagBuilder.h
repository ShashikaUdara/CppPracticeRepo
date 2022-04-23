#ifndef _BAG_BUILDER_H_
#define _BAG_BUILDER_H_

#include <iostream>
#include <cstring>
#include "Bag.h"

using namespace std;

class BagBuilder
{
protected:
	Bag * bag;
public:
	virtual void readyBook(){};
	virtual void readyPen(){};
	virtual void readyLunch(){};
	Bag * getType()
	{
		return bag;
	}
};

#endif