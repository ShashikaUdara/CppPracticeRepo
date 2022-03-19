#include <iostream>
#include "Fruit.h"
#include "Vegetable.h"

using namespace std;

class Mango : Fruit, Vegetable
{
public:
	Mango(string sFr, string sVege);
	~Mango();
	void isSweet();
};