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

	cout<<"SimpleThreadClass :: threadControlerFunction"<<endl;
	pthread_t threadsArr[THREAD_COUNT];

	for(i=0; i<THREAD_COUNT; i++)
	{
		if(iThreadCreateStat = pthread_create(&threadsArr[i], NULL, basicThreadFunction, &i))
		{
			cout<<"Error: Unable to create the thread"<<iThreadCreateStat<<endl;
			exit(-1);
		}
		cout<<"Thread Status: "<<iThreadCreateStat<<endl;
	}
	pthread_exit(NULL);
}

void* SimpleThreadClass :: basicThreadFunction(void *someValue)
{
	cout<<"SimpleThreadClass :: *basicThreadFunction"<<endl;
	int iSomeVal = *(int *)(someValue);
	cout<<"Thread# "<<iSomeVal<<": Executed"<<endl;
	pthread_exit(NULL);
}

void SimpleThreadClass :: threadControllerStringPass()
{
	cout<<"SimpleThreadClass :: threadControllerStringPass"<<endl;
	int x, iRetOfThreadCreate;
	pthread_t threadsStringPass[THREAD_COUNT];

	for(x=0; x<THREAD_COUNT; x++)
	{
		string strPassByRef = "ThreadItem" + x;

		if(iRetOfThreadCreate = pthread_create(&threadsStringPass[x], NULL, stringPassThreadFunction, &strPassByRef))
		{
			cout<<"Can't create thread# "<<x<<" -- Status: "<<iRetOfThreadCreate<<endl;
		}
		cout<<"Thread# "<<x<<" Created -- Status "<<iRetOfThreadCreate<<endl;
	}
	pthread_exit(NULL);
}

void* SimpleThreadClass :: stringPassThreadFunction(void* someString)
{
	cout<<"SimpleThreadClass :: stringPassThreadFunction"<<endl;
	string strSomeVal = *(string *)someString;
	cout<<"New "<<strSomeVal<<" has been executed..."<<endl;
	pthread_exit(NULL);
}
