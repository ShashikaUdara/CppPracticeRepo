#ifndef _LESSION_BOOK_H_
#define _LESSION_BOOK_H_

#include <iostream>
#include <cstring>
#include "Book.h"

using namespace std;

class LessionBook : public Book
{
public:
	LessionBook()
	{
		cout<<"Putting lession book to the school bag"<<endl;
		strcpy(_book, "Lession Book");
	}
};

#endif