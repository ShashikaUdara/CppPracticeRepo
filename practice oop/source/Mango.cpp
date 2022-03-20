#include "Mango.h"

Mango :: Mango(string sFr, string sVege) : Fruit(sFr), Vegetable(sVege)
{
	cout<<"Constructor - Mango: "<<sFr<< " and "<<sVege<<endl;
}

Mango :: ~Mango()
{
	cout<<"Distructor - Mango"<<endl;
}

void Mango :: isSweet()
{
	cout<<"Mango :: isSweet()"<<endl;
}

// accessing the protected property inside the chiled class
void Mango :: accessProtectedProperties()
{
	// Vegetable* oVege = new Vegetable("call from Mango class - accessProtectedProperties(function)");
	// Fruit* oFr = new Fruit("call from Mango class - accessProtectedProperties(function)");

	cout<<"sFruitDefinition: "<<sFruitDefinition<<endl;
	cout<<"sVegeDefinition: "<<sVegeDefinition<<endl;
	
	// can't access protected parent functions like below
	// cout<<"oVege->protectedVegetable(): "<<oVege->protectedVegetable()<<endl;
	// cout<<"oFr->protectedFruit(): "<<oFr->protectedFruit()<<endl;

	cout<<"protectedVegetable(): "<<protectedVegetable()<<endl;
	cout<<"protectedFruit(): "<<protectedFruit()<<endl;
}