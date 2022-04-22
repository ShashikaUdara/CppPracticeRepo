#ifndef _HOTDOG_MEAL_H_
#define _HOTDOG_MEAL_H_

#include <iostream>
#include <cstring>
#include "MealBuilde.h"
#include "HotDog.h"
#include "Salad.h"
#include "Drink.h"

using namespace std;

class HotDogMeal
{
	public:
		HotDogMeal()
		{
			_meal = new ComboMeal("HotDogMeal");
		}

		void cookEntree()
		{
			HotDog * hotdog = new HotDog;
			_meal->setEntree(hotdog);
		}

		void cookSide()
		{
			Salad * salad = new Salad;
			_meal->setSide(salad);
		}

		void fillDrink()
		{
			Drink * drink = new Drink;
			_meal->setDrink(drink);
		}
};

#endif