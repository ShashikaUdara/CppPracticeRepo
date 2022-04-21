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
			cout<<"Making the hotdog.\nPutting mayo and cethup. \nPutting sausage in the grill. \nBaking bun"<<endl;
			strcpy(_entree, "HotDog");
		}
};

#endif