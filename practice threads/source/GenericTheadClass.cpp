#include "GenericTheadClass.h"

GenericTheadClass :: GenericTheadClass()
{
	cout<<"Default constructor - GenericTheadClass"<<endl;
}

GenericTheadClass :: ~GenericTheadClass()
{
	cout<<"Destructor - GenericTheadClass"<<endl;
}

void GenericTheadClass:: threadControllerFunction()
{
	int i = 0;
	int iRet = 0;
	void* vStatus;
	struct Book* book = new Book[THREAD_COUNT];

	cout<<"threadControllerFunction"<<endl;
	// creating joinable threads
	// define thread
	pthread_t thread[THREAD_COUNT];

	// define thread attribute
	pthread_attr_t attr;

	// initiating the thread attribute
	pthread_attr_init(&attr);

	// set detache state
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

	for(i=0; i<THREAD_COUNT; i++)
	{
		book->csBookName = (char *)calloc(50, sizeof(char));
		sprintf(book->csBookName, "book_%d", i+1);
		book->iPageCount = i+100;
		if(iRet = pthread_create(&thread[i], &attr, threadFunction, book))
		{
			cout<<"Can't create thread "<<i<<" - Status: "<<iRet<<endl;
			exit(-1);
		}
		cout<<"Thread #"<<i<<" Created - Status: "<<iRet<<endl;
	}

	pthread_attr_destroy(&attr);
	
	for(i=0; i<THREAD_COUNT; i++)
	{
		if(iRet = pthread_join(thread[i], &vStatus))
		{
			cout<<"thread #"<<i<<" can't join - status: "<<iRet<<endl;
			exit(-2);
		}
		pthread_exit(NULL);
	}
}

void* GenericTheadClass:: threadFunction(void* bookData)
{
	struct Book* bookPassed = (struct Book*)bookData;
	cout<<"threadFunction"<<endl;
	cout<<"csBookName: "<<bookPassed->csBookName<<" and iPageCount: "<<bookPassed->iPageCount<<endl;
	pthread_exit(NULL);
}
