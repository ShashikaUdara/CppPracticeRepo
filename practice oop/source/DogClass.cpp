#include "DogClass.h"

DogClass :: DogClass(string someVal) : AnimalClass(someVal)
{
	cout<<"Constructor : DogClass - "<<someVal<<endl;
}

DogClass :: ~DogClass()
{
	cout<<"Destructor"<<endl;
}

string DogClass :: wigleTale()
{
	// cout<<"wiggleTale()"<<endl;
	return "Dog wiggle his tail";
}
