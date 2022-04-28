#include <iostream>

using namespace std;

int main()
{
	cout<<"it's main"<<endl;
	Sheep * sheep = new Sheep;
	sheep->setHairColor("White");
	sheep->setTail(5);
	sheep->setWeight(90);
	sheep->setHeight(1);
	sheep->setAge(5);

	Cow * cow = new Cow;
	cow->setHairColor("Brown");
	cow->setTail(20);
	cow->setWeight(790);
	cow->setHeight(2);
	cow->setAge(8);

	Animal * farm[3];

	// populating a farm
	farm[0] = sheep->clone();
	farm[1]->cow->clone();

	// changing cows property
	farm[1]->setWeight(1000);

	// give a sheep a hair cut
	sheep->shearing();
	farm[0] = sheep->clone();
}