#include <iostream>

using namespace std;

class C
{
	int _value = 0;
	C();
public:
	C(const int & val) : _value(val) {}
	void setV(const int & val) {_value=val;}
	int getV() const {return _value;}
};

void print(const C & obj)
{
	printf("indirect- %d\n", obj.getV());
}

int main()
{
	// when the expicit constructor accepts only one argument, this can be done
	C obj1 = 'x';
	printf("direct- %d\n",obj1.getV());
	print('x');
}