#ifndef _LEADER_H_
#define _LEADER_H_

#include <iostream>

using namespace std;

class Leader
{
	private:
		static Leader * _leader;
		Leader()
		{
			cout<<"Creating the only one Leader instance..."<<endl;
		}

	public:
		static Leader * getLeader();
		void giveSpeach();
};

#endif