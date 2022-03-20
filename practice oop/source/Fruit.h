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

protected:
	string protectedFruit();

	string sFruitDefinition = "Fruits are the means by which flowering plants (also known as angiosperms) disseminate their seeds";
};

#endif