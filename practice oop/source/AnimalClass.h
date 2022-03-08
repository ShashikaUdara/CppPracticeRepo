#include<iostream>

using namespace std;

class AnimalClass
{
public:
	AnimalClass();
	~AnimalClass();
	 void setMovement(string move);
	string getMovement();
	void movement();
	void setFood(string food);
	string getFood();
	void eat();
	void setSound(string sound);
	string getSound();
	void shout();


private:
	string move = "";
	string food = "";
	string sound = "";
};