#ifndef _DRY_FOOD_H_
#define _DRY_FOOD_H_

#include <iostream>
#include <cstring>
#include "Lunch.h"

using namespace std;

class DryFood : public Lunch
{
public:
	DryFood()
	{
		cout<<"Putting dry food pack to the camping bag"<<endl;
		strcpy(_lunch, "DryFood");
	}
};

#endif