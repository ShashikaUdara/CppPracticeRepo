#include"AnimalClass.h"

using namespace std;

class DogClass : public AnimalClass
{
public:
	DogClass(string someVal);
	~DogClass();
	string wigleTale();
};