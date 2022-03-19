#ifndef _VEGETABLE_H_
#define _VEGETABLE_H_

#include <iostream>

using namespace std;

class Vegetable
{
public:
	Vegetable(string sVegetable);
	~Vegetable();
	void canCook(string sFood);
};

#endif