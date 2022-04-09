#include <cstdio>
#include <iostream>

using namespace std;

class B
{
	int i=0;
public:
	void setV(const int &a);
	int getV() const;
};

void B :: setV(const int &a)
{
	i=a;
}

int B :: getV() const
{
	return i;
}


int main()
{
	const int x = 75;
	B b;
	b.setV(x);
	cout<<"i= "<<b.getV()<<endl;

	B a=b;
	cout<<"i= "<<a.getV()<<endl;

	a.setV(105);
	b=a;
	cout<<"(a)i= "<<a.getV()<<endl;
	cout<<"(b)i= "<<b.getV()<<endl;

}