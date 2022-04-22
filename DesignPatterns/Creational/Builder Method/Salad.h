#ifndef _SALAD_H_
#define _SALAD_H_

#include <iostream>
#include <cstring>

using namespace std;

class Salad
{
	public:
		Salad()
		{
			cout<<"Cutting vagies and putting in the bowl.\nPutting olive oill"<<endl;
			strcpy(_side, "Salad");
		}
};

#endif