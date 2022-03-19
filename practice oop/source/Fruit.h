// C++ Multiple Inheritance
#ifndef _FRUIT_H_
#define _FRUIT_H_

#include <iostream>

using namespace std;

class Fruit
{
public:
	Fruit(string sFruit);
	~Fruit();
	void hasSmell(string sSmell);
};

#endif