#ifndef _SIDE_H_
#define _SIDE_H_

#include <iostream>
#include <cstring>

using namespace std;

class Side
{
	protected:
		char _side[15];
	public:
		char * getSide()
		{
			return _side;
		}
};

#endif