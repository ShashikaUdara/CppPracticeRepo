#include <iostream>
#include "GhostFunctionClass.h"
#include "CopyConstructorEx.h"

using namespace std;

void showVal(CopyConstructorEx objCC)
{
	cout<<"Value: "<<objCC.getVal()<<endl;
}

int main()
{
	cout<<"it's main"<<endl;

	// C++ Class Member Functions
	GhostFunctionClass gc;
	gc.memberFunctionExample_1();
	gc.memberFunctionExampl_2();

	// calling copy constructor created class
	CopyConstructorEx cc(481);
	showVal(cc);
}