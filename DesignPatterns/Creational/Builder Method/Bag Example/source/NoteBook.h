#ifndef _NOTEBOOK_H_
#define _NOTEBOOK_H_

#include <iostream>
#include <cstring>
#include "Book.h"

using namespace std;

class NoteBook : public Book
{
public:
	NoteBook()
	{
		cout<<"Putting note book to the practice bag"<<endl;
		strcpy(_book, "Note Book");
	}
};

#endif