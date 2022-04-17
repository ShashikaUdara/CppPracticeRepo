#ifndef _ICING_CREAM_H_
#define _ICING_CREAM_H_

#include <iostream>
#include <cstring>
#include "Cream.h"

using namespace std;

class IcingCream : public Cream
{
public:
	IcingCream()
	{
		strcpy(_nature, "candy");
		cout<<"Making Icing cream for Icing cake"<<endl;
	}
	
	void tast()
	{
		cout<<"Tast like sweet"<<endl;
	}
};

#endif