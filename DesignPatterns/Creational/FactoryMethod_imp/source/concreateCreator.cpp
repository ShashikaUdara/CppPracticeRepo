#include <iostream>

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
		strcpy_s(_type, "Espresso");
		cout<<"Macking a cup of Espresso"<<endl;
		cout<<"Grind and brew one scoop of espresso beans."<<endl;
	}
};

class Cappuccino : public Coffee
{
public:
	Cappuccino() : Coffee()
	{
		strcpy_s(_type, "Cappuccino");
		cout<<"Macking a cup of Cappuccino"<<endl;
		cout<<"Grind and brew one scoop of espresso beans."<<endl;
		cout<<"Heat and foam milk"<<endl;
	}
}


class CoffeeMakerFactory
{
private:
	Coffee * coffee;
public:
	Coffee * getCoffee()
	{
		// purpose is to return the intended coffee option depending on the user input
		int choice;

		cout<<"Select the coffee type:"<<endl;
		cout<<"1: Espresso"<<endl;
		cout<<"2: Cappuccino"<<endl;
		cin>>choice;
	}

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

};