#ifndef _FRIES_H_
#define _FRIES_H_

#include <iostream>
#include <cstring>

using namespace std;

class Fries
{
	public:
		Fries()
		{
			cout<<"Putting slized potato in the rowling oill.\nPut seasoning on top of fries"<<endl;
			strcpy(_side, "Fries");
		}
};

#endif