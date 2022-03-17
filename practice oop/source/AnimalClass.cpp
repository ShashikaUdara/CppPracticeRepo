#include"AnimalClass.h"

AnimalClass :: AnimalClass(string someVal)
{
	cout<<"Constructor : AnimalClass - "<<someVal<<endl;
}

AnimalClass :: ~AnimalClass()
{
	cout<<"Distructor"<<endl;
}

void AnimalClass :: setMovement(string move)
{
	cout<<"function - setMovement()"<<endl;
	this->move = move;
}

string AnimalClass :: getMovement()
{
	return this->move;
}

void AnimalClass :: setFood(string food)
{
	cout<<"function -  setFood()"<<endl;
	this->food = food;
}

string AnimalClass :: getFood()
{
	return this->food;
}

void AnimalClass :: setSound(string sound)
{
	cout<<"function - setSound()"<<endl;
	this->sound = sound;
}

string AnimalClass :: getSound()
{
	return this->sound;
}
