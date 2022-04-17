#ifndef _VANILA_BREAD_H_
#define _VANILA_BREAD_H_

#include <iostream>
#include <cstring>
#include "Bread.h"

using namespace std;

class VanilaBread : public Bread
{
public:
	VanilaBread()
	{
		strcpy(_color, "yellow");
		cout<<"Making the Vanila bread for Icing cake"<<endl;
	}
	
	void smell()
	{
		cout<<"Smell's like vanila"<<endl;
	}
};

#endif