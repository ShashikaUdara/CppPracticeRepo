#ifndef _BOOK_H_
#define _BOOK_H_

#include <iostream>
#include <cstring>

using namespace std;

class Book
{
protected:
	char _book[20];
public:
	char * getBook()
	{
		return _book;
	}
};

#endif