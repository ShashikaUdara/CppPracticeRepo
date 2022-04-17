#ifndef _BREAD_H_
#define _BREAD_H_

#include <iostream>

using namespace std;

class Bread
{
protected:
	char _color[20];
public:
	Bread(){}
	virtual void smell() = 0;
};

#endif