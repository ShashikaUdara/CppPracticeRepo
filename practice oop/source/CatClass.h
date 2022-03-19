#include"AnimalClass.h"

using namespace std;

class CatClass : public AnimalClass
{
public:
	CatClass(string someVal);
	~CatClass();
	string wigleTale();
};