#include "CatClass.h"

CatClass :: CatClass(string someVal) : AnimalClass(someVal)
{
	cout<<"Constructor : CatClass - "<<someVal<<endl;
}

CatClass :: ~CatClass()
{
	cout<<"Destructor"<<endl;
}

string CatClass :: sayMeyow()
{
	// cout<<"wiggleTale()"<<endl;
	return "Cat say meyaw";
}
