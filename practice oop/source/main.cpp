#include<iostream>
#include"DogClass.h"
#include "CatClass.h"
#include "EncapsulationClass.h"
#include "Mango.h"

using namespace std;

int main()
{
	// public 		- members are accessible from outside the class
	// private 		- members cannot be accessed (or viewed) from outside the class
	// protected 	- members cannot be accessed from outside the class, however, they can be 
	// 			  accessed in inherited classes. You will learn more about

	cout<<"main here"<<endl;
	EncapsulationClass* exampleObj = new EncapsulationClass();
	exampleObj->setEmployName("Udara Abeyrathne");
	cout<<"Employe name is "<<exampleObj->getEmployName()<<endl;
	exampleObj->setCompanyName("Hitachi-DPS");
	cout<<"Company name is "<<exampleObj->getCompanyName()<<endl;

	DogClass* dog = new DogClass("Some dog value");
	dog->setMovement("Run");
	cout<<"dog->getMovement(): "<<dog->getMovement()<<endl;
	dog->setFood("Meat");
	cout<<"dog->getFood(): "<<dog->getFood()<<endl;
	dog->setSound("Bow wow");
	cout<<"dog->getSound(): "<<dog->getSound()<<endl;
	cout<<"dog->wigleTale(): "<<dog->wigleTale()<<endl;

	// multilevel inheritance
	CatClass* cat = new CatClass("Some cat value");
	cat->setMovement("Cat walk");
	cout<<"cat->getMovement(): "<<cat->getMovement()<<endl;
<<<<<<< HEAD
	cat->setFood(string food);
	cout<<"cat->getFood(): "<<cat->getFood()<<endl;
	cat->setSound(string sound);
=======
	cat->setFood("Fish");
	cout<<"cat->getFood(): "<<cat->getFood()<<endl;
	cat->setSound("Miyaw");
>>>>>>> 220525b20af8a46aed54f6f44301bc789f33a26e
	cout<<"cat->getSound(): "<<cat->getSound()<<endl;
	cout<<"cat->sayMeyow(): "<<cat->sayMeyow()<<endl;

	// multiple inheritance 
	Mango* mango = new Mango("is a Fruit", "a Vegetable");
	mango->isSweet();
	mango->hasSmell("Mango smell");
	mango->canCook("Mango can cook");
}