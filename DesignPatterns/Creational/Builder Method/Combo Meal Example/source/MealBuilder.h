#ifndef _MEAL_BULDER_H_
#define _MEAL_BULDER_H_

#include <iostream>
#include <cstring>
#include "ComboMeal.h"

using namespace std;

class MealBuilder
{
	protected:
		ComboMeal * _meal;

	public:
		virtual void cookEntree() {};
		virtual void cookSide() {};
		virtual void fillDrink() {};
		ComboMeal * getMeal()
		{
			return _meal;
		}
};

#endif