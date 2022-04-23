#ifndef _BAG_H_
#define _BAG_H_

#include <iostream>
#include <cstring>
#include "Bag.h"
#include "Book.h"
#include "Pen.h"
#include "Lunch.h"

using namespace std;

class Bag
{
protected:
	char _bag[100];
	Book * book;
	Pen * pen;
	Lunch * lunch;
public:
	Bag(const char * _type)
	{
		cout<<"Prepearing the bag"<<endl;
		sprintf(_bag, "Bag: %s", _type);
	}

	void setBook(Book * b) { book = b; }
	void setPen(Pen * p) { pen = p; }
	void setBook(Lunch * l) { lunch = l; }

	const char * showBag()
	{
		spritf(_bag, "%s %s %s %s", _bag, book->getBook(), pen->getPen(), lunch->getLunch());
		return _bag;
	}
};

#endif