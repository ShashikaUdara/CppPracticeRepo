#ifndef _PEN_H_
#define _PEN_H_

#include <iostream>
#include <cstring>
#include "Pen.h"

using namespace std;

class KnifePen : public Pen
{
public:
	KnifePen()
	{
		cout<<"Putting note book to the camping bag"<<endl;
		strcpy(_pen, "Knife Pen");
	}
};

#endif