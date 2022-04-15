#ifndef _BISCUIT_H_
#define _BISCUIT_H_

#include "Item.h"

using namespace std;

class Biscuit : public Item
{
public:
	Biscuit()
	{
		cout<<"Vending machine is pulling a Biscuit out"<<endl;
		cout<<"Please collect your Biscuit\nThank you...\nCome again...!"<<endl;
		strcpy(_item, "Biscuit");
	}
};

#endif