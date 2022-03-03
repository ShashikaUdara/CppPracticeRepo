#include <iostream>
#include <stdint.h>
#include <string>
#include <pthread.h>

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

private:
	int debugCounter = 0;
};