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
	pthread_exit(NULL);
}

void* SimpleThreadClass :: stringPassThreadFunction(void* someString)
{
	cout<<"(2) SimpleThreadClass :: stringPassThreadFunction"<<endl;
	string strSomeVal = *(string *)someString;
	cout<<"(2) New "<<strSomeVal<<" has been executed..."<<endl;
	pthread_exit(NULL);
}

