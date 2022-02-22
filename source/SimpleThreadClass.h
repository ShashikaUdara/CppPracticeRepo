#include <iostream>
#include <stdint.h>
#include <pthread.h>

using namespace std;

#define THREAD_COUNT 10

class SimpleThreadClass
{
public:
	SimpleThreadClass();
	~SimpleThreadClass();
	void threadControlerFunction();
	static void *basicThreadFunction(void *someValue);
	void threadControllerStringPass();
	static void *stringPassThreadFunction(void* someString);
};