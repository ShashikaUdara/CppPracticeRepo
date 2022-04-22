#ifndef _SALAD_H_
#define _SALAD_H_

#include <iostream>
#include <cstring>
#include "Side.h"

using namespace std;

class Salad : public Side
{
	public:
		Salad()
		{
			cout<<"Cutting vagies and putting in the bowl.\nPutting olive oill"<<endl;
			strcpy(_side, "Salad");
		}
};

#endif