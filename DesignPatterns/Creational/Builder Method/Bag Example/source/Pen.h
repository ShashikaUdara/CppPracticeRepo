#ifndef _PEN_H_
#define _PEN_H_

#include <iostream>
#include <cstring>

using namespace std;

class Pen
{
protected:
	char _pen[20];
public:
	char * getPen()
	{
		return _pen;
	}
};

#endif