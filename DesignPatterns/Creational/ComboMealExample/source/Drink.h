#ifndef _ENTREE_H_
#define _ENTREE_H_

#include <iostream>

using namespace std;

class Drink
{
private:
	char _drink[20];
public:
	Drink()
	{
		cout<<"Filling the cup with soda"<<endl;
		sprintf_s(_drink, "soda");
	}
	char * getDrink();
};

#endif