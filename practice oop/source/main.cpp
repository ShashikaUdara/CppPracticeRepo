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
	cat->setFood("Fish");
	cout<<"cat->getFood(): "<<cat->getFood()<<endl;
	cat->setSound("Miyaw");
	cout<<"cat->getSound(): "<<cat->getSound()<<endl;
	cout<<"cat->sayMeyow(): "<<cat->sayMeyow()<<endl;

	// multiple inheritance 
	Mango* mango = new Mango("is a Fruit", "a Vegetable");
	mango->isSweet();
	mango->hasSmell("Mango smell");
	mango->canCook("Mango can cook");

	// C++ Inheritance Access - Access Specifiers
	mango->accessProtectedProperties();

	// C++ Polymorphism
	// Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
	AnimalClass* ac = new AnimalClass("Main to Animal Class");
	DogClass* dc = new DogClass("Main to Dog Class");
	CatClass* cc = new CatClass("Main to Cat Class");

	ac->polyExample();
	dc->polyExample();
	cc->polyExample();

}