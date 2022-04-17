#ifndef _DOOR_H_
#define _DOOR_H_

#include <iostream>

using namespace std;

class Door
{
public:
	Door(){}
	// pure virtual fucntion
	virtual void open() = 0;
};

#endif