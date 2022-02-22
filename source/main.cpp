#include <iostream>
#include "SimpleThreadClass.h"

using namespace std;

int main()
{
	cout<<"Main function"<<endl;
	SimpleThreadClass* stc = new SimpleThreadClass();

	stc->threadControlerFunction();
}