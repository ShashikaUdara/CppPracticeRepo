#include<iostream>
#include"AnimalClass.h"

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
}