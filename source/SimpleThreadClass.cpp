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
	threadControlerPassStructWithJoin();
	pthread_exit(NULL);
}

void* SimpleThreadClass :: structPassThreadFunction(void *someStruct)
{
	cout<<"(3) SimpleThreadClass :: structPassThreadFunction"<<endl;
	struct Demo tempDemo = *(struct Demo *)someStruct;
	cout<<"(3) tempDemo.thread_id:"<<tempDemo.thread_id<<" and tempDemo.message:"<<tempDemo.message<<endl;
	pthread_exit(NULL);
}

// Joining and Detaching Threads
/*
pthread_attr_t
When you start a new thread, it can assume some well-defined defaults, or you can explicitly specify its characteristics.
The thread attributes structure as follows.
typedef struct {
    int                 __flags;
    size_t              __stacksize;
    void                *__stackaddr;
    void                (*__exitfunc)(void *status);
    int                 __policy;
    struct sched_param  __param;
    unsigned            __guardsize;
} pthread_attr_t;

pthread_attr_init()
Initialize a thread-attribute object

pthread_attr_destroy()
Destroy a thread-attribute object

pthread_attr_setdetachstate()
The pthread_attr_setdetachstate() function sets the detach state
attribute of the thread attributes object referred to by attr to
the value specified in detachstate.  The detach state attribute
determines whether a thread created using the thread attributes
object attr will be created in a joinable or a detached state.

The following values may be specified in detachstate:

* PTHREAD_CREATE_DETACHED
       Threads that are created using attr will be created in a
       detached state.

* PTHREAD_CREATE_JOINABLE
       Threads that are created using attr will be created in a
       joinable state.

The default setting of the detach state attribute in a newly
initialized thread attributes object is PTHREAD_CREATE_JOINABLE.

The pthread_attr_getdetachstate() returns the detach state
attribute of the thread attributes object attr in the buffer
pointed to by detachstate.

pthread_join 
Wait for thread termination

return value of 'sizeof' on struct is highter than the cumulative value of inner element sizes.

This is because of padding added to satisfy alignment constraints. Data structure alignment impacts 
both performance and correctness of programs:

	* Mis-aligned access might be a hard error (often SIGBUS).
	* Mis-aligned access might be a soft error.
		- Either corrected in hardware, for a modest performance-degradation.
		- Or corrected by emulation in software, for a severe performance-degradation.
		- In addition, atomicity and other concurrency-guarantees might be broken, leading to subtle errors.

SIGBUS
Bus Error (also known as SIGBUS and is usually signal 10) occur when a process is trying to access 
memory that the CPU cannot physically address.In other words the memory tried to access by the program 
is not a valid memory address.It caused due to alignment issues with the CPU (eg. trying to read a long 
from an address which isn’t a multiple of 4). SIGBUS is abbreviation for “Bus Error”.
SIGBUS signal occurs in below cases,
*/

void SimpleThreadClass :: threadControlerPassStructWithJoin()
{
	cout<<"(4) SimpleThreadClass :: threadControlerPassStructWithJoin"<<endl;
	pthread_attr_t attr;
	pthread_t thread[THREAD_COUNT];
	int iRet = 0, i = 0;
	size_t capasity = 10;
	void* status;

	cout<<"********* 1"<<endl;

	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
	cout<<"********* 2"<<endl;

	struct Demo  *demo = (Demo *)calloc(capasity, sizeof(Demo));
	cout<<"********* 3"<<endl;

	for(i=0; i<THREAD_COUNT; i++)
	{
		// adding values to struct
		demo->thread_id = i+1;
		cout<<"********* 4"<<endl;

		demo->message = (char *)calloc(50, sizeof(char));	
		sprintf(demo->message, "Thread string %d", i+1);
		cout<<"********* 5"<<endl;
		if(iRet = pthread_create(&thread[i], &attr, structPassThreadFuncWithJoin, demo))
		{
			cout<<"(4) Can't create thread: "<<i+1<<" due to the status: "<< iRet<<endl;
			cout<<"********* 6"<<endl;
			exit(-1);
		}
		cout<<"(4) Thread# "<<i+1<<" created - status: "<<iRet<<endl;
		cout<<"********* 7"<<endl;
	}
	cout<<"______________ All thread creation is over!!! ______________"<<endl;
	cout<<"********* 8"<<endl;

	// next freeing attribut and wait for other threads to treminte
	pthread_attr_destroy(&attr);
	cout<<"********* 9"<<endl;
	for(i=0;i<THREAD_COUNT;i++)
	{
		if(iRet = pthread_join(thread[i], &status))
		{
			cout<<"(4) Unable to join, thread status: "<<iRet<<endl;
			cout<<"********* 10"<<endl;
			exit(-1);
		}
		cout<<"(4) Thread# ("<<i+1<<") execution completed - Status: "<<iRet<<endl;
		cout<<"********* 11"<<endl;
		pthread_exit(NULL);
	}
	
}

void* SimpleThreadClass :: structPassThreadFuncWithJoin(void *someval)
{
	cout<<"(4) SimpleThreadClass :: structPassThreadFuncWithJoin"<<endl;
	struct Demo *someValD = (struct Demo*)someval;
	cout<<"********* 12"<<endl;
	sleep(1);
	cout<<"ThreadId: "<<someValD->thread_id<<" and message: "<<someValD->message<<endl;
	cout<<"********* 13"<<endl;
	pthread_exit(NULL);
}
