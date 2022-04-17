#ifndef _CHOCOLATE_CREAM_H_
#define _CHOCOLATE_CREAM_H_

#include <iostream>
#include <cstring>
#include "Cream.h"

using namespace std;

class ChocolateCream : public Cream
{
protected:
	char _nature[20];
public:
	ChocolateCream()
	{
		strcpy(_nature, "chocolate");
		cout<<"Making the chocolate cream for the chocolate cake"<<endl;
	}

	void tast()
	{
		cout<<"Tast like chocolate."<<endl;
	}
};

#endif