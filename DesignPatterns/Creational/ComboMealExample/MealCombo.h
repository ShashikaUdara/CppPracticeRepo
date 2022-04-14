#ifndef _COMBO_MEAL_H_
#define _COMBO_MEAL_H_

#include <iostream>
#include "Entree.h"
#include "Side.h"
#include "Drink.h"

class MealCombo
{
private:
	Entree * entree;
	Side * side;
	Drink * drink;
	char _bag[100];
public:
	MealCombo(const char * type) { sprintf_s(_bag, "%s meal combo: ", type)}
	void setEntree(Entree * e) { entree = e}
	void setSide(Side * s) { side = s;}
	void setDrink(Drink * d) { drink = d;}

	const char * openMealBag();
};

#endif