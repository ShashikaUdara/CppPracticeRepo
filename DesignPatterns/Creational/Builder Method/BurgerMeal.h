#ifndef _BERGER_MEAL_H_
#define _BERGER_MEAL_H_

#include <iostream>
#include <cstring>
#include "MealBuilder.h"
#include "Burger.h"
#include "Fries.h"
#include "Drink.h"

using namespace std;

class BurgerMeal : public MealBuilder
{
	public:
		BurgerMeal()
		{
			_meal = new ComboMeal("BurgerMeal");
		}

		void cookEntree()
		{
			Burger * burger = new Burger;
			_meal->setEntree(burger);
		}

		void cookSide()
		{
			Fries * fries = new Fries;
			_meal->setSide(fries);
		}

		void fillDrink()
		{
			Drink * drink = new Drink;
			_meal->setDrink(drink);
		}
};

#endif