#include "EncapsulationClass.h"

EncapsulationClass :: EncapsulationClass()
{
	cout<<"Constructor"<<endl;
}

EncapsulationClass :: ~EncapsulationClass()
{
	cout<<"Destructor"<<endl;
}

void EncapsulationClass :: setEmployName(string name)
{
	cout<<"setEmployName"<<endl;
	eName = name;
}

string EncapsulationClass :: getEmployName()
{
	return eName;
}
