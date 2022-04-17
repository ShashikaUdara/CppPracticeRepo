#ifndef _RADIO_SPEAKER_H_
#define _RADIO_SPEAKER_H_

#include <iostream>
#include "Speaker.h"

using namespace std;

class RadioSpeakers : public Speaker
{
public:
	RadioSpeakers()
	{
		cout<<"Creating Radio Speakers"<<endl;
	}

	void checkSound()
	{
		cout<<"Sounds checked in Radio Speaker"<<endl;
	}
};

#endif