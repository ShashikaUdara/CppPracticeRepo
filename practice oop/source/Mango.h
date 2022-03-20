#ifndef _MANGO_H_
#define _MANGO_H_

#include <iostream>
#include "Fruit.h"
#include "Vegetable.h"

using namespace std;

class Mango : public Fruit, public Vegetable
{
public:
	Mango(string sFr, string sVege);
	~Mango();
	void isSweet();
	void accessProtectedProperties();
};

#endif