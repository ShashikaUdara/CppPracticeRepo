#ifndef _SIDE_H_
#define _SIDE_H_

#include <iostream>
#include <cstring>

using namespace std;

class Salad
{
	protected:
		char _side[15];
	public:
		Salad()
		{
			cout<<"Cutting vagies and putting in the bowl.\nPutting olive oill"<<endl;
			strcpy(_side, "Salad");
		}
};

#endif