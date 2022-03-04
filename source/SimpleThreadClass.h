#include <iostream>
#include <stdint.h>
#include <string>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define THREAD_COUNT 10

struct Demo
{
	int thread_id;
	char *message;
};

class SimpleThreadClass
{
public:
	SimpleThreadClass();
	~SimpleThreadClass();
	void threadControlerFunction();
	static void *basicThreadFunction(void *someValue);
	void threadControllerStringPass();
	static void *stringPassThreadFunction(void* someString);
	void threadControllerPassStruct();
	static void *structPassThreadFunction(void *someStruct);
	void threadControlerPassStructWithJoin();
	static void *structPassThreadFuncWithJoin(void *someval);

private:
	int debugCounter = 0;
};