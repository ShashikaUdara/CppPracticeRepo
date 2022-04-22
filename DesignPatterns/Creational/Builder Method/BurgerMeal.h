#ifndef _DRINK_H_
#define _DRINK_H_

#include <iostream>
#include <cstring>

using namespace std;

class Drink
{
	protected:
		char _drink[15];
	public:
		Drink()
		{
			cout<<"Filling the coup of drink"<<endl;
			strcpy(_drink, "soda");
		}

		char * getDrink()
		{
			return _drink;
		}
};

#endif