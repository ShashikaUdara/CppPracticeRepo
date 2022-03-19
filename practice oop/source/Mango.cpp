#include "Mango.h"

Mango :: Mango(string sFr, string sVege) : Fruit(sFr), Mango(sVege)
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
