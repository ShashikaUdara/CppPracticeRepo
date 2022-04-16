#ifndef _GAS_ENGINE_H_
#define _GAS_ENGINE_H_

#include <iostream>
#include "Engine.h"

using namespace std;

class GasEngine:public Engine
{
public:
	GasEngine()
	{
		strcpy(_sound, "Beasty");
		cout<<"Creating Gas Car Engine"<<endl;
	}

	// pure virtual fucntion overrides here
	void start()
	{
		cout<<"Gas engines are loud - "<<_sound<<endl;
	}
};

#endif