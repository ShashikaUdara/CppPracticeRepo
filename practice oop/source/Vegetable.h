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

protected:
	string protectedVegetable();

	string sVegeDefinition = "Vegetables are parts of plants that are consumed by humans or other animals as food";
};

#endif