#ifndef _BURGER_H_
#define _BURGER_H_

#include <iostream>
#include <cstring>
#include "Entree.h"

using namespace std;

class Burger : public Entree
{
	public:
		Burger()
		{
			cout<<"Making the burger.\nSlicing onions and tomatos. \nPutting patty in the grill. \nBaking bun"<<endl;
			strcpy(_entree, "Burger");
		}
};

#endif