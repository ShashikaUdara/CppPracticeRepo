#ifndef _GHOST_FUNCTION_CLASS_H_
#define _GHOST_FUNCTION_CLASS_H_

#include <iostream>

using namespace std;

class GhostFunctionClass
{
public:
	GhostFunctionClass()
	{
		cout<<"Constructor - GhostFunctionClass"<<endl;
	}

	GhostFunctionClass(const GhostFunctionClass &obj);

	~GhostFunctionClass()
	{
		cout<<"Distructor - GhostFunctionClass"<<endl;
	}

	// A member function of a class is a function that has its definition or its prototype within the 
	// class definition like any other variable.
	void memberFunctionExample_1()
	{
		cout<<"void memberFunctionExample_1()"<<endl;
	}

	void memberFunctionExampl_2();
};

#endif