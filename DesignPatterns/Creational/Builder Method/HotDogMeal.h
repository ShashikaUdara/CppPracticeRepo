#ifndef _HOTDOG_H_
#define _HOTDOG_H_

#include <iostream>
#include <cstring>

using namespace std;

class HotDog
{
	public:
		HotDog()
		{
			cout<<"Making the HotDog.\nPutting sausage in the grill.\nPutting ketchup and mayo in it.\nTosting bun"<<endl;
			strcpy(_entree, "HotDog");
		}
};

#endif