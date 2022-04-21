#ifndef _ENTREE_H_
#define _ENTREE_H_

#include <iostream>
#include <cstring>

using namespace std;

class Entree
{
	protected:
		char _entree[15];
	public:
		char * getEntree()
		{
			return _entree;
		}
};

#endif