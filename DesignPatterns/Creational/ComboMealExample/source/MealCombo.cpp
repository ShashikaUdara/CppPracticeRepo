#include "MealCombo.h"

const char * MealCombo :: openMealBag()
{
	sprintf_s(_bag, "%s %s %s %s", _bag, entree->getEntree(), side->getSide(), drink->getDrink());
	return _bag;
}