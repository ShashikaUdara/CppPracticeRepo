#ifndef _COW_H_
#define _COW_H_

#include <iostream>
#include "Animal.h"

using namespace std;

class Cow : public Animal
{
public:
	Cow()
	{
		_stubbornness = 6;
		_agressiveness = 5;
		_intelligence = 8;
	}

	Cow * clone()
	{
		return new Cow(*this);
	}
};

#endif