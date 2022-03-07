#include <iostream>
#include "SimpleThreadClass.h"

using namespace std;

int main()
{
	cout<<"Main function"<<endl;
	SimpleThreadClass* stc = new SimpleThreadClass();

	stc->threadControlerFunction();
	cout<<"Next"<<endl;
	// stc->threadControllerStringPass(); // This function execution has been temporarily moved to the SimpleThreadClass.cpp
}