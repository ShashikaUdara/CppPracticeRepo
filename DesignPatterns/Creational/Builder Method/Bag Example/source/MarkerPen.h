#ifndef _MAKER_PEN_H_
#define _MAKER_PEN_H_

#include <iostream>
#include <cstring>
#include "Pen.h"

using namespace std;

class MarkerPen : public Pen
{
public:
	MarkerPen()
	{
		cout<<"Putting marker pen to the practice bag"<<endl;
		strcpy(_pen, "Marker Pen");
	}
};

#endif