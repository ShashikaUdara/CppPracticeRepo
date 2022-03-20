#ifndef _DOGCLASS_H_
#define _DOGCLASS_H_

#include"AnimalClass.h"

using namespace std;

class DogClass : public AnimalClass
{
public:
	DogClass(string someVal);
	~DogClass();
	string wigleTale();
	void polyExample();
};

#endif