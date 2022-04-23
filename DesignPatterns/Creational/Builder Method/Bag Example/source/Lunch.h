#ifndef _LUNCH_H_
#define _LUNCH_H_

#include <iostream>
#include <cstring>

using namespace std;

class Lunch
{
protected:
	char _lunch[20];
public:
	char * getLunch()
	{
		return _lunch;
	}
};

#endif