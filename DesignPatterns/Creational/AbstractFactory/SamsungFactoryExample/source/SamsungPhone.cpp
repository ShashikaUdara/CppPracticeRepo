#include "SamsungPhone.h"

VolumnController * SamsungPhone :: addVolumnController()
{
	return new PhoneVolumnController;
}

Button * SamsungPhone :: addButtons()
{
	return new PhoneButtons;
}

Speaker * SamsungPhone :: addSpeakers()
{
	return new PhoneSpeakers;
}

char * SamsungPhone :: getItemName()
{
	return _itemName;
}
