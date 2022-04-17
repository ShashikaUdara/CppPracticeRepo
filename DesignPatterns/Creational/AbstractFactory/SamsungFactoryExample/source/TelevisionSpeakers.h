#ifndef _TELEVISION_SPEAKER_H_
#define _TELEVISION_SPEAKER_H_

#include <iostream>
#include "Speaker.h"

using namespace std;

class TelevisionSpeakers : public Speaker
{
public:
	TelevisionSpeakers()
	{
		cout<<"Creating Television Speakers"<<endl;
	}

	void checkSound()
	{
		cout<<"Sounds checked in Television Speaker"<<endl;
	}
};

#endif