#ifndef _PEN_H_
#define _PEN_H_

#include <iostream>
#include <cstring>
#include "Pen.h"

using namespace std;

class BallpointPen : public Pen
{
public:
	BallpointPen()
	{
		cout<<"Putting ballpoint pen to the school bag"<<endl;
		strcpy(_pen, "Ballpoint Pen");
	}
};

#endif