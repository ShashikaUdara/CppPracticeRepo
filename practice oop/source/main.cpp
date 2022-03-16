#include<iostream>
#include"DogClass.h"
#include "EncapsulationClass.h"

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

	DogClass* dog = new DogClass("from main");
	dog->setMovement("Run");
	cout<<"dog->getMovement(): "<<dog->getMovement()<<endl;
	dog->setFood("Meat");
	cout<<"dog->getFood(): "<<dog->getFood()<<endl;
	dog->setSound("Bow wow");
	cout<<"dog->getSound(): "<<dog->getSound()<<endl;
	cout<<"dog->wigleTale(): "<<dog->wigleTale()<<endl;

}