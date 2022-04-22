#ifndef _FRIES_H_
#define _FRIES_H_

#include <iostream>
#include <cstring>
#include "Side.h"

using namespace std;

class Fries : public Side
{
	public:
		Fries()
		{
			cout<<"Putting slized potato in the rowling oill.\nPut seasoning on top of fries"<<endl;
			strcpy(_side, "Fries");
		}
};

#endif