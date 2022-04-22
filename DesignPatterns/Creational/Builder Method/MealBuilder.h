#ifndef _MEAL_BULDER_H_
#define _MEAL_BULDER_H_

#include <iostream>
#include <cstring>

using namespace std;

class MealBuilde
{
	protected:
		Entree * entree;
		Side * side;
		Drink * drink;
		
	public:
		MealBuilde()
		{
			cout<<"Filling the coup of drink"<<endl;
			strcpy(_drink, "soda");
		}

		char * getDrink()
		{
			return _drink;
		}
};

#endif