#ifndef _CREAM_H_
#define _CREAM_H_

#include <iostream>

using namespace std;

class Cream
{
protected:
	char _nature[20];
public:
	Cream(){}
	virtual void tast() = 0;
};

#endif