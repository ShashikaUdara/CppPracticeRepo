#include <cstdio>
#include <iostream>

using namespace std;

class A
{
	int x = 0;
public:
	void setX(const int a) {x=a;}
	int getX();
	int getX() const;
};

int A :: getX()
{
	puts("mutable");
	return x;
}

int A :: getX() const
{
	puts("const safe");
	return x;
}

int main()
{
	A a;
	a.setX(55);
	cout<<"mutable: "<<a.getX()<<endl;

	const A b=a;
	cout<<"const:"<<b.getX()<<endl;
}