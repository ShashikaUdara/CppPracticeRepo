#ifndef _CATCLASS_H_
#define _CATCLASS_H_

#include"AnimalClass.h"

using namespace std;

class CatClass : public AnimalClass
{
public:
	CatClass(string someVal);
	~CatClass();
	string sayMeyow();
};

#endif