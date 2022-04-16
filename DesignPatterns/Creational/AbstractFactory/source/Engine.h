#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <iostream>
#include <cstring>
using namespace std;

class Engine
{
protected:
	char _sound[20];
public:
	Engine()
	{
		// strcpy(_sound, "");
	}

	// pure virtual fucntion overrides here
	virtual void start() = 0;
};

#endif