#ifndef _SPEAKER_H_
#define _SPEAKER_H_

#include <iostream>

using namespace std;

class Speaker
{
public:
	Speaker(){}
	virtual void checkSound() = 0;
};

#endif