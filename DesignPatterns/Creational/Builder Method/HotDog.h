#ifndef _HOTDOG_H_
#define _HOTDOG_H_

#include <iostream>
#include <cstring>
#include "Entree.h"

using namespace std;

class HotDog : public Entree
{
	public:
		HotDog()
		{
			cout<<"Making the hotdog.\nPutting mayo and cethup. \nPutting sausage in the grill. \nBaking bun"<<endl;
			strcpy(_entree, "HotDog");
		}
};

#endif