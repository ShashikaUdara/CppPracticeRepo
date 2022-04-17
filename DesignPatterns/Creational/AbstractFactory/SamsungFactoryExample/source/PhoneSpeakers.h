#ifndef _PHONE_SPEAKER_H_
#define _PHONE_SPEAKER_H_

#include <iostream>
#include "Speaker.h"

using namespace std;

class PhoneSpeakers :public Speaker
{
public:
	PhoneSpeakers()
	{
		cout<<"Creating Phone Speakers"<<endl;
	}

	void checkSound()
	{
		cout<<"Sounds checked in Phone Speaker"<<endl;
	}
};

#endif