#include "Basics.h"

Basics :: Basics(string someVal)
{
	cout<<"Constructor: Basics"<<someVal<<endl;
}

Basics :: ~Basics()
{
	cout<<"Distructor: Basics"<<endl;
}

void Basics :: introToPointers()
{
	cout<<"Basics :: introToPointers"<<endl;
	int iA = 5;
	int *pB;

	pB = &iA;

	cout<<"iA: "<<iA<<endl;
	cout<<"&iA: "<<&iA<<endl;
	cout<<"pB: "<<pB<<endl;
	cout<<"*pB: "<<*pB<<endl;
	cout<<"&pB: "<<&pB<<endl;
}
