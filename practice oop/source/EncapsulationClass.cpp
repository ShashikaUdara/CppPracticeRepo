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

void EncapsulationClass :: setCompanyName(string cName)
{
	cout<<"setCompanyName"<<endl;
	this->cName = cName;
}

string EncapsulationClass :: getCompanyName()
{
	return cName;
}
