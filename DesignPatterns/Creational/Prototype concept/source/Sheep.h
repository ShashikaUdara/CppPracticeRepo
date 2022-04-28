#ifndef _SHEEP_H_
#define _SHEEP_H_

#include <iostream>
#include "Animal.h"

using namespace std;

class Sheep : public Animal
{
public:
	Sheep()
	{
		_hairLength = 5;
		_stubbornness = 3;
		_agressiveness = 2;
		_intelligence = 7;
	}

	Sheep * clone()
	{
		return new Sheep(*this);
	}

	int shearing()
	{
		_hairLength -= 2;
		return _hairLength;
	}
};

#endif