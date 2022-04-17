#include "SamsungRadio.h"

VolumnController * SamsungRadio :: addVolumnController()
{
	return new RadioVolumnController;
}

Button * SamsungRadio :: addButtons()
{
	return new RadioButtons;
}

Speaker * SamsungRadio :: addSpeakers()
{
	return new RadioSpeakers;
}

char * SamsungRadio :: getItemName()
{
	return _itemName;
}
