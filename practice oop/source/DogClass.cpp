#include "DogClass.h"

DogClass :: DogClass()
{
	cout<<"Constructor"<<endl;
}

DogClass :: ~DogClass()
{
	cout<<"Destructor"<<endl;
}

void DogClass :: wigleTale()
{
	cout<<"wiggleTale()"<<endl;
	return "Dog wiggle his tail";
}
