#include "Vegetable.h"

Vegetable :: Vegetable(string sVegetable)
{
	cout<<"Constructor - Vegetable: "<<sVegetable<<endl;
}

Vegetable :: ~Vegetable()
{
	cout<<"Distructor - Vegetable"<<endl;
}

void Vegetable :: canCook(string sFood)
{
	cout<<"Vegetable :: canCook(string sFood) - "<<sFood<<endl;
}


// protected function
string Vegetable :: protectedVegetable()
{
	return "This is protectedVegetable()";
}