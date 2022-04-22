#ifndef _BERGER_MEAL_H_
#define _BERGER_MEAL_H_

#include <iostream>
#include <cstring>
#include "MealBuilde.h"
#include "Burger.h"
#include "Side.h"
#include "Drink.h"

using namespace std;

class BurgerMeal
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
			Side * side = new Side;
			_meal->setSide(side);
		}

		void fillDrink()
		{
			Drink * drink = new Drink;
			_meal->setDrink(drink);
		}
};

#endif