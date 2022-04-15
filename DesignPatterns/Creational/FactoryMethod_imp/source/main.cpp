#include <iostream>
#include <cstring>
#include "Item.h"
#include "VendingMachineFactory.h"

using namespace std;

int main()
{
	VendingMachineFactory * vendingMachine;
	Item * item;
	item = vendingMachine->getItem();
	cout<<"Customer request is: "<<item->getType()<<endl;
}