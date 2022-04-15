#ifndef _ITEM_H_
#define _ITEM_H_

#include <iostream>
#include <cstring>

using namespace std;

class Item
{
protected:
	char _item[15];
public:
	Item(){}
	char * getType() {return _item;}
};

#endif