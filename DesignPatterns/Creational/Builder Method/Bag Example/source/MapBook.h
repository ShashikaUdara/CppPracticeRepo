#ifndef _MAPBOOK_H_
#define _MAPBOOK_H_

#include <iostream>
#include <cstring>
#include "Book.h"

using namespace std;

class MapBook : public Book
{
public:
	MapBook()
	{
		cout<<"Putting map book to the camping bag"<<endl;
		strcpy(_book, "Map Book");
	}
};

#endif