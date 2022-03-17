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


private:
	string move = "";
	string food = "";
	string sound = "";
};