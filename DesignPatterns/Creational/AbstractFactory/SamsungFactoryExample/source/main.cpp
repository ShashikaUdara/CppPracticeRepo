#include <iostream>
#include "VolumnController.h"
#include "SamsungPhone.h"
#include "SamsungRadio.h"
#include "SamsungTelevision.h"
#include "SamsungFactory.h"
#include "Button.h"
#include "Speaker.h"

using namespace std;

int main()
{
	SamsungFactory * samsung;
	int choice = 0;
	cout<<"it's main"<<endl;
	cout<<"Select the item"<<endl;
	cout<<"1. Television"<<endl;
	cout<<"2. Radio"<<endl;
	cout<<"3. Phone"<<endl;
	cout<<"Your choice: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			samsung = new SamsungTelevision;
			break;
		case 2:
			samsung = new SamsungRadio;
			break;
		case 3:
			samsung = new SamsungPhone;
			break;
		default:
			cout<<"Wrong input"<<endl;
			samsung = NULL;
			break;
	}

	if(samsung != NULL)
	{
		VolumnController * volumnObj = samsung->addVolumnController();
		Button * buttonObj = samsung->addButtons();
		Speaker * speakersObj = samsung->addSpeakers();

		volumnObj->checkVolumn();
		buttonObj->pushButtons();
		speakersObj->checkSound();
	}
}