#ifndef _CHOCOLATE_BREAD_H_
#define _CHOCOLATE_BREAD_H_

#include <iostream>
#include <cstring>
#include "Bread.h"

using namespace std;

class ChocolateBread : public Bread
{
public:
	ChocolateBread()
	{
		strcpy(_color, "brown");
		cout<<"Making the chocolate bread for the chocolate cake"<<endl;
	}
	void smell()
	{
		cout<<"Smell's like chocolate"<<endl;
	}
};

#endif