#include "SimpleThreadClass.h"

SimpleThreadClass :: SimpleThreadClass()
{
	cout<<"SimpleThreadClass constructor"<<endl;
}

SimpleThreadClass :: ~SimpleThreadClass()
{
	cout<<"SimpleThreadClass distructor"<<endl;
}

void SimpleThreadClass :: threadControlerFunction()
{
	int i, iThreadCreateStat;

	cout<<"(1) SimpleThreadClass :: threadControlerFunction"<<endl;
	pthread_t threadsArr[THREAD_COUNT];

	for(i=0; i<THREAD_COUNT; i++)
	{
		if(iThreadCreateStat = pthread_create(&threadsArr[i], NULL, basicThreadFunction, &i))
		{
			cout<<"(1) Error: Unable to create the thread"<<iThreadCreateStat<<endl;
			exit(-1);
		}
		cout<<"(1) Thread Status: "<<iThreadCreateStat<<endl;
	}
	threadControllerStringPass();
	pthread_exit(NULL);
}

void* SimpleThreadClass :: basicThreadFunction(void *someValue)
{
	cout<<"(1) SimpleThreadClass :: *basicThreadFunction"<<endl;
	int iSomeVal = *(int *)(someValue);
	cout<<"(1) Thread# "<<iSomeVal<<": Executed"<<endl;
	pthread_exit(NULL);
}

void SimpleThreadClass :: threadControllerStringPass()
{
	cout<<"(2) SimpleThreadClass :: threadControllerStringPass"<<endl;
	int x, iRetOfThreadCreate;
	pthread_t threadsStringPass[THREAD_COUNT];

	for(x=0; x<THREAD_COUNT; x++)
	{
		string strPassByRef = "ThreadItem-" + to_string(x);

		if(iRetOfThreadCreate = pthread_create(&threadsStringPass[x], NULL, stringPassThreadFunction, &strPassByRef))
		{
			cout<<"(2) Can't create thread# "<<strPassByRef<<" -- Status: "<<iRetOfThreadCreate<<endl;
		}
		cout<<"(2) Thread# "<<strPassByRef<<" Created -- Status "<<iRetOfThreadCreate<<endl;
	}
	threadControllerPassStruct();
	pthread_exit(NULL);
}

void* SimpleThreadClass :: stringPassThreadFunction(void* someString)
{
	cout<<"(2) SimpleThreadClass :: stringPassThreadFunction"<<endl;
	string strSomeVal = *(string *)someString;
	cout<<"(2) New "<<strSomeVal<<" has been executed..."<<endl;
	pthread_exit(NULL);
}

/*
Following function 'threadControllerPassStruct()' gave me a segmantation fault (core dumped)
The main reason for such segmantation fault is becuse my program is accessing a memory, which is not belongs to the program scope
When a program tries to do read and write operation in a read only location or freed memory block, it's known as core dumped. It's and error indicating memory corruption.
Following are common segmantation fault scenarios
	* Modifying a string literal
	* Accessing an address that is freed
	* Accessing out of array index bounds
	* Improper use of scanf()
	* Stack Overflow
	* Dereferencing uninitialized pointer 
*/

void SimpleThreadClass :: threadControllerPassStruct()
{
	size_t strLen = 11;
	cout<<"(3) SimpleThreadClass :: threadControllerPassStruct"<<endl;

	int y, iReturnFromThreadCreate;

	struct Demo structDemo[THREAD_COUNT];

	pthread_t threadStructPass[THREAD_COUNT];

	for(y=0; y<THREAD_COUNT; y++)
	{
		structDemo[y].thread_id = y+1;

		// structDemo[y].message = "ThreadId#" + to_string(y+1);
		// allocating memory due to core dumped
		if((structDemo[y].message = (char *)calloc(strLen, sizeof(char))) == NULL)
		{
			cout<<"************************** Can't allocate memory on index: "<<y<<endl;
		}

		sprintf(structDemo[y].message, "ThreadId#%d", y+1);

		if(iReturnFromThreadCreate = pthread_create(&threadStructPass[y], NULL, structPassThreadFunction, &structDemo[y]))
		{
			cout<<"(3) Can't create thread#"<<y<<" due to the status: "<<iReturnFromThreadCreate<<endl;
		}
		cout<<"(3) Thread "<<y<<" created under the status "<<iReturnFromThreadCreate<<" of pthread_create"<<endl;
		free(structDemo[y].message);
	}

	pthread_exit(NULL);
}

void* SimpleThreadClass :: structPassThreadFunction(void *someStruct)
{
	cout<<"(3) SimpleThreadClass :: structPassThreadFunction"<<endl;
	struct Demo tempDemo = *(struct Demo *)someStruct;
	cout<<"(3) tempDemo.thread_id:"<<tempDemo.thread_id<<" and tempDemo.message:"<<tempDemo.message<<endl;
	pthread_exit(NULL);
}
