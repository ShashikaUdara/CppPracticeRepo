#include "ExceptionHandlingExamples.h"

ExceptionHandlingExamples :: ExceptionHandlingExamples()
{
	cout<<"Constructor - ExceptionHandlingExamples()"<<endl;
}

ExceptionHandlingExamples :: ~ExceptionHandlingExamples()
{
	cout<<"Distructor - ExceptionHandlingExamples()"<<endl;
}

void ExceptionHandlingExamples :: basicExample()
{
	cout<<"ExceptionHandlingExamples :: basicExample()"<<endl;
	int age = 15;

	try
	{
		if(age >= 18)
		{
			cout<<"Age is grater than 18"<<endl;
		}
		else
		{
			throw(age);
		}
	}
	catch(int eAge)
	{
		cout<<"Age is: "<<eAge<<endl;
	}
}

void ExceptionHandlingExamples :: basicExceptionHandling2()
{
	cout<<"ExceptionHandlingExamples :: basicExceptionHandling2()"<<endl;
	string animal = "Dog";

	try
	{
		if(animal == "Cat")
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			throw 555;
		}
	}
	catch(int iError)
	{
		cout<<"Error code - "<<iError<<endl;
	}
}

void ExceptionHandlingExamples :: handleAnyException()
{
	cout<<"ExceptionHandlingExamples :: handleAnyException()"<<endl;
	bool status = false;
	try
	{
		if(status)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			throw 525;
		}
	}
	catch(...)
	{
		cout<<"Exception handled"<<endl;
	}
}
