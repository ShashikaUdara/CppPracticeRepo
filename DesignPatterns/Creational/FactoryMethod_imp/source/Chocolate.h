#ifndef _CHOCOLATE_H_
#define _CHOCOLATE_H_

#include "Item.h"

using namespace std;

class Chocolate : public Item
{
public:
	Chocolate()
	{
		cout<<"Vending machine is pulling a Chocolate out"<<endl;
		cout<<"Please collect your Chocolate\nThank you...\nCome again...!"<<endl;
		strcpy(_item, "Chocolate");
	}
};

#endif