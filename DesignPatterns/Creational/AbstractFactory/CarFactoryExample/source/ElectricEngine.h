#ifndef _ELECTRIC_ENGINE_H_
#define _ELECTRIC_ENGINE_H_

#include <iostream>
#include "Engine.h"

using namespace std;

class ElectricEngine:public Engine
{
public:
	ElectricEngine()
	{
		strcpy(_sound, "Calm");
		cout<<"Creating Electric Car Engine"<<endl;
	}

	// pure virtual fucntion overrides here
	void start()
	{
		cout<<"Electric engines are quite - "<<_sound<<endl;
	}
};

#endif