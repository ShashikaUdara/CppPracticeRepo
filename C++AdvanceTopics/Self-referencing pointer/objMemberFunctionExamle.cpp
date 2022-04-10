#include <iostream>

using namespace std;

class C
{
	int _value = 0;
public:
	void setV(const int & val) {_value=val;}
	int getV() const;
	int getV2() const;
};

int C :: getV() const 
{
	printf("getv(): this- %p\n", this);
	return _value;
}

int C :: getV2() const 
{
	printf("getv2(): this- %p\n", this);
	return this->_value;
}

void print(const C & obj)
{
	printf("indirect- %d\n", obj.getV());
}

int main()
{
	const int i=90;
	C o1;
	o1.setV(i);
	printf("address of o1 - %p\n", &o1);
	int temp = o1.getV();
	printf("getV()- %d\n", temp);
	temp = o1.getV2();
	printf("getV2()- %d\n", temp);

	C o2;
	o2.setV(i);
	printf("address of o2 - %p\n", &o2);
	temp = o2.getV();
	printf("getV()- %d\n", temp);
	temp = o2.getV2();
	printf("getV2()- %d\n", temp);

	// default copy constructor
	// even though the previous object is copied by the newly created object, the refernece is different
	C o3 = o1;
	o3.setV(i);
	printf("address of o3 - %p\n", &o3);
	temp = o3.getV();
	printf("getV()- %d\n", temp);
	temp = o3.getV2();
	printf("getV2()- %d\n", temp);
}  