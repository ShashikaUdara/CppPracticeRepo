#include <iostream>
#include "CakeFactory.h"
#include "IcingCakeFactory.h"
#include "ChocolateCakeFactory.h"
#include "Cream.h"
#include "Bread.h"

using namespace std;

int main()
{
	int choice = 0;
	CakeFactory * cakeFactory;
	cout<<"it's main"<<endl;
	cout<<"Select the cake category"<<endl;
	cout<<"1: Ising Cake"<<endl;
	cout<<"2: Chocolate Cake"<<endl;
	cout<<"Your Option: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cakeFactory = new IcingCakeFactory;
			break;
		case 2:
			cakeFactory = new ChocolateCakeFactory;
			break;
		default:
			cout<<"Wrong entry"<<endl;
			cakeFactory = NULL;
			break;
	}

	if(cakeFactory != NULL)
	{
		Cream * cream = cakeFactory->makeCream();
		Bread * bread = cakeFactory->makeBread();

		cream->tast();
		bread->smell();
	}
}