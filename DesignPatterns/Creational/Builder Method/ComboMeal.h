#ifndef _COMBO_MEAL_H_
#define _COMBO_MEAL_H_

#include <iostream>
#include <cstring>

using namespace std;

class ComboMeal
{
	protected:
		Entree * entree;
		Side * side;
		Drink * drink;
		char _bag[100];
		
	public:
		ComboMeal()
		{
			cout<<"Prepearing the combo meal"<<endl;
			strcpy(_bag, "Combo Meal: ");
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