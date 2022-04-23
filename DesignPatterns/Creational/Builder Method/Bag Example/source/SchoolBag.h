#ifndef _SCHOOL_BAG_H
#define _SCHOOL_BAG_H

#include <iostream>
#include <cstring>
#include "BagBuilder.h"
#include "LessionBook.h"
#include "BallpointPen.h"
#include "Rice.h"

class SchoolBag : public BagBuilder
{
public:
	SchoolBag()
	{
		bag = new Bag("School Bag");
	}

	void readyBook()
	{
		LessionBook * book = new LessionBook;
		bag->setBook(book);
	}

	void readyPen()
	{
		BallpointPen * pen = new BallpointPen;
		bag->setPen(pen);
	}

	void readyLunch()
	{
		Rice * lunch = new Rice;
		bag->setLunch(lunch);
	}

};

#endif