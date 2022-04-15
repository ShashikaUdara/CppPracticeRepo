#include <iostream>
#include <cstring>
using namespace std;

class Coffee
{
protected:
	char _type[15];
public:
	Coffee() {}
	char * getType()
	{
		return _type;
	}
};

class Espresso:public Coffee
{
public:
	Espresso() : Coffee()
	{
		strcpy(_type, "Espresso");
		cout<<"Making a cup of Espresso"<<endl;
		cout<<"Grind and brew one scoop of espresso beans."<<endl;
	}
};

class Cappuccino : public Coffee
{
public:
	Cappuccino() : Coffee()
	{
		strcpy(_type, "Cappuccino");
		cout<<"Making a cup of Cappuccino"<<endl;
		cout<<"Grind and brew one scoop of espresso beans."<<endl;
		cout<<"Heat and foam milk"<<endl;
	}
};


class CoffeeMakerFactory
{
private:
	Coffee * _coffee;
public:
	Coffee * getCoffee()
	{
		// purpose is to return the intended coffee option depending on the user input
		int choice;

		cout<<"Select the coffee type:"<<endl;
		cout<<"1: Espresso"<<endl;
		cout<<"2: Cappuccino"<<endl;
		cout<<"Selection: ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				return new Espresso;
			case 2:
				return new Cappuccino;
			default:
				cout<<"Invealied selection"<<endl;
				return NULL;
		}
	}
};

int main()
{
	CoffeeMakerFactory coffeeMachine;
	Coffee * cup;
	cup = coffeeMachine.getCoffee();

	cout<<endl<<"You asked for the " << cup->getType()<<endl;
}