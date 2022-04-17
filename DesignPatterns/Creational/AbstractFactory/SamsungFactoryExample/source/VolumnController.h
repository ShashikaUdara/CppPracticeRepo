#ifndef _VOLUMN_CONTROLLER_H_
#define _VOLUMN_CONTROLLER_H_

#include <iostream>

using namespace std;

class VolumnController
{
public:
	VolumnController(){}
	virtual void checkVolumn() = 0;
};

#endif