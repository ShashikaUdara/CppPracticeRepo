#ifndef _COMBO_MEAL_H_
#define _COMBO_MEAL_H_

#include <iostream>
#include <cstring>
#include "Entree.h"
#include "Side.h"
#include "Drink.h"

using namespace std;

class ComboMeal
{
	protected:
		Entree * entree;
		Side * side;
		Drink * drink;
		char _bag[100];
		
	public:
		ComboMeal(const char * type)
		{
			cout<<"Prepearing the combo meal"<<endl;
			sprintf(_bag, "Combo Meal: %s", type);
		}

		void setEntree(Entree * e)
		{
			entree = e;
		}

		void setSide(Side * s)
		{
			side = s;
		}

		void setDrink(Drink * d)
		{
			drink = d;
		}

		const char * openMealBag()
		{
			sprintf(_bag, "%s %s %s %s", _bag, entree->getEntree(), side->getSide(), drink->getDrink());
			return _bag;
		}
};

#endif