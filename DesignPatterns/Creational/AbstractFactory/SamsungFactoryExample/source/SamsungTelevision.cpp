#include "SamsungTelevision.h"

VolumnController * SamsungTelevision :: addVolumnController()
{
	return new TelevisionVolumnController;
}

Button * SamsungTelevision :: addButtons()
{
	return new TelevisionButtons;
}

Speaker * SamsungTelevision :: addSpeakers()
{
	return new TelevisionSpeakers;
}

char * SamsungTelevision :: getItemName()
{
	return _itemName;
}
