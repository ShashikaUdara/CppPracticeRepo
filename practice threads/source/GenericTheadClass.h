#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define THREAD_COUNT 10

struct Book
{
	char* csBookName;
	int iPageCount;
};

class GenericTheadClass
{
public:
	GenericTheadClass();
	~GenericTheadClass();
	void threadControllerFunction();
	static void* threadFunction(void* bookData);
};