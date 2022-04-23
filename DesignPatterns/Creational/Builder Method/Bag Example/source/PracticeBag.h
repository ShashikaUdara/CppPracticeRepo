#ifndef _PRACTICE_BAG_H
#define _PRACTICE_BAG_H

#include <iostream>
#include <cstring>
#include "BagBuilder.h"
#include "NoteBook.h"
#include "MarkerPen.h"
#include "Sanwich.h"

using namespace std;

class PracticeBag : public BagBuilder
{
public:
	PracticeBag()
	{
		bag = new Bag("Practice Bag");
	}

	void readyBook()
	{
		NoteBook * book = new NoteBook;
		bag->setBook(book);
	}

	void readyPen()
	{
		MarkerPen * pen = new MarkerPen;
		bag->setPen(pen);
	}

	void readyLunch()
	{
		Sanwich * lunch = new Sanwich;
		bag->setLunch(lunch);
	}

};

#endif