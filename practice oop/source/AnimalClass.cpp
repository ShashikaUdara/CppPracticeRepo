#include"AnimalClass.h"

AnimalClass :: AnimalClass()
{
	cout<<"Constructor"<<endl;
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

void AnimalClass :: movement()
{
	cout<<"movement() "<<getMovement()<<endl;
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

void AnimalClass :: eat()
{
	cout<<"eat() "<<getFood()<<endl;
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

void AnimalClass :: shout()
{
	cout<<"shout() "<<getSound()<<endl;
}
