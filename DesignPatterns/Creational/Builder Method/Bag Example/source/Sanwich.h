#ifndef _SANDWICH_H_
#define _SANDWICH_H_

#include <iostream>
#include <cstring>
#include "Lunch.h"

using namespace std;

class Sanwich : public Lunch
{
public:
	Sanwich()
	{
		cout<<"Putting sanwich to the practice bag"<<endl;
		strcpy(_lunch, "Sanwich");
	}
};

#endif