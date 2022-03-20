#include "Fruit.h"

Fruit :: Fruit(string sFruit)
{
	cout<<"Constructor - Fruit: "<<sFruit<<endl;
}

Fruit :: ~Fruit()
{
	cout<<"Distructor - Fruit"<<endl;
}

void Fruit :: hasSmell(string sSmell)
{
	cout<<"Fruit :: hasSmell(string sSmell) - "<<sSmell<<endl;
}

// protected function
string Fruit :: protectedFruit()
{
	return "This is protectedFruit()";
}