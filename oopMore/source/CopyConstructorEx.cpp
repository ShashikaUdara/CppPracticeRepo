#include "CopyConstructorEx.h"

CopyConstructorEx :: CopyConstructorEx(int iID)
{
	cout<<"CopyConstructorEx - Constructor"<<endl;
	ptrVal = new int;
	*ptrVal = iID;
}

CopyConstructorEx :: CopyConstructorEx(const CopyConstructorEx &obj)
{
	cout<<"CopyConstructorEx - Copy Constructor"<<endl;
	ptrVal = new int;
	*ptrVal = *obj.ptrVal;
	cout<<"ptrVal: 	"<<*obj.ptrVal<<endl;
}

CopyConstructorEx :: ~CopyConstructorEx()
{
	cout<<"Freeing memory"<<endl;
	delete ptrVal;
}

int CopyConstructorEx :: getVal()
{
	return *ptrVal;
}