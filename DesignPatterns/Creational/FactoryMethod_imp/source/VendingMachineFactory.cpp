#include "VendingMachineFactory.h"

Item * VendingMachineFactory :: getItem()
{
	// get the customer choice and instetiate the object
	int choice;

	cout<<"Pick your choice"<<endl;
	cout<<"1: Milk Bottle"<<endl;
	cout<<"2: Chocolate"<<endl;
	cout<<"3: Biscuit"<<endl;
	cout<<"Selection: ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			return new MilkBottle;
		case 2:
			return new Chocolate;
		case 3:
			return new Biscuit;
		default:
			cout<<"Wrong entry"<<endl;
			return NULL;
	}
}