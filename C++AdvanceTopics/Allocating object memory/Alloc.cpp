#include <iostream>
#include <new>

using namespace std;

class Alloc
{
	int _a = 0;
	int _b = 0; 
	int _c = 0;
public:
	Alloc(int i = 1):_a(_a+i+1), _b(_b+i+2), _c(_c+i+3){ puts("Alloc constructor"); }
	~Alloc(){ puts("Alloc Destructor"); }

	int a(){ return _a; }
	int b(){ return _b; }
	int c(){ return _c; }
};

int main()
{
	cout<<"it's main"<<endl;
	// allocating memory inside try catch
	try
	{
		Alloc * allocObj1 = new Alloc;
		printf("_a=%d, _b=%d, _c=%d\n", allocObj1->a(), allocObj1->b(), allocObj1->c());
		delete allocObj1;
	}
	catch(bad_alloc & ba)
	{
		printf("new allocObj1 failed: %s\n", ba.what());
		return -1;
	}

	// using nothrow parameter when you are not using exceptions
	Alloc * allocObj2 = new(nothrow) Alloc;
	if(allocObj2 == nullptr)
	{
		puts("new allocObj2 failed");
		return -2;
	}
	printf("_a=%d, _b=%d, _c=%d\n", allocObj2->a(), allocObj2->b(), allocObj2->c());
	delete allocObj2;

	// when you are creating array of objects
	Alloc * allocObj3 = new(nothrow) Alloc[5];
	if(allocObj3 == nullptr)
	{
		puts("new allocObj3 failed");
		return -3;
	}
	printf("_a=%d, _b=%d, _c=%d\n", allocObj3->a(), allocObj3->b(), allocObj3->c());
	delete [] allocObj3;
}