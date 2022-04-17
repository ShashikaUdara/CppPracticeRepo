#include <iostream>
#include "GasCarFactory.h"
#include "ElectricCarFactory.h"

using namespace std;

int main()
{
	CarFactory * carPlant;
	int choice = 0;
	cout<<"it's main"<<endl;
	cout<<"Please select the car type"<<endl;
	cout<<"1: Gasoline"<<endl;
	cout<<"2: Electric"<<endl;
	cout<<"Your choice: ";
	cin>>choice;
	cout<<endl;

	switch(choice)
	{
		case 1:
			carPlant = new GasCarFactory;
			break;
		case 2:
			carPlant = new ElectricCarFactory;
			break;
		default:
			cout<<"Invalid input"<<endl;
			carPlant = NULL;
			break;
	}

	if(carPlant != NULL)
	{
		Door * carDoor = carPlant->buildDoor();
		Engine * carEngine = carPlant->buildEngine();

		// running the created car
		carDoor->open();
		carEngine->start();
	}
}