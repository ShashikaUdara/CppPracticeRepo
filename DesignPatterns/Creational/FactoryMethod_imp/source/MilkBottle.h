#ifndef _MILK_BOTTLE_H_
#define _MILK_BOTTLE_H_

#include "Item.h"

using namespace std;

class MilkBottle : public Item
{
public:
	MilkBottle()
	{
		cout<<"Vending machine is pulling a Milk Bottel out"<<endl;
		cout<<"Please collect your Milk Bottle\nThank you...\nCome again...!"<<endl;
		strcpy(_item, "Milk Bottle");
	}
};

#endif