#include <iostream>
#include "ComboMeal.h"
#include "MealBuilder.h"

using namespace std;

int main()
{
	MealBuilder * cook = new MealBuilder;
	ComboMeal * meal;
	int choice;
	cout<<"Select a meal"<<endl;
	cout<<"1. Burger Meal"<<endl;
	cout<<"2. HotDog Meal"<<endl;
	cout<<"Your Choice: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cook = new BurgerMeal;
			break;
		case 2:
			cook = new HotDogMeal;
			break;
		default:
			cout<<"Wrong entry"<<endl;
			cook = NULL;
			break;
	}

	if(cook != NULL)
	{
		cook->cookEntree();
		cook->cookSide();
		cook->fillDrink();
		meal = cook->getMeal();
		cout<<meal->openMealBag();<<endl;
	}
}