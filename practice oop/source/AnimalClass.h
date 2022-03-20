#ifndef _ANIMALCLASS_H_
#define _ANIMALCLASS_H_
#include<iostream>

using namespace std;

class AnimalClass
{
public:
	AnimalClass(string someVal);
	~AnimalClass();
	void setMovement(string move);
	string getMovement();
	void setFood(string food);
	string getFood();
	void setSound(string sound);
	string getSound();
	void polyExample();


private:
	string move = "";
	string food = "";
	string sound = "";
};

#endif