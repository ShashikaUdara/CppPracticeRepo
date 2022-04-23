#ifndef _RICE_H_
#define _RICE_H_

#include <iostream>
#include <cstring>
#include "Lunch.h"

using namespace std;

class Rice : public Lunch
{
public:
	Rice()
	{
		cout<<"Putting rice pack to the school bag"<<endl;
		strcpy(_lunch, "Rice");
	}
};

#endif