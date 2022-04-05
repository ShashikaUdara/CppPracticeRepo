#ifndef _COPY_CONSTRUCTOR_EX_H_
#define _COPY_CONSTRUCTOR_EX_H_

#include <iostream>

using namespace std;

class CopyConstructorEx
{
public:
	CopyConstructorEx(int iID);
	CopyConstructorEx(const CopyConstructorEx &obj);
	~CopyConstructorEx();
	int getVal();

private:
	int *ptrVal;
};

#endif