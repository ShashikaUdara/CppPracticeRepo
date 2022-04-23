#ifndef _CAMPING_BAG_H
#define _CAMPING_BAG_H

#include <iostream>
#include <cstring>
#include "BagBuilder.h"
#include "MapBook.h"
#include "KnifePen.h"
#include "DryFood.h"

class CampingBag : public BagBuilder
{
public:
	CampingBag()
	{
		bag = new Bag("Camping Bag");
	}

	void readyBook()
	{
		MapBook * book = new MapBook;
		bag->setBook(book);
	}

	void readyPen()
	{
		KnifePen * pen = new KnifePen;
		bag->setPen(pen);
	}

	void readyLunch()
	{
		DryFood * lunch = new DryFood;
		bag->setLunch(lunch);
	}

};

#endif