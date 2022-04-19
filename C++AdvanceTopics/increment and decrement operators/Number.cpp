#include <iostream>

using namespace std;

class Number
{
private:
	int value = 0;
public:
	Number(int val = 0):value(val){}
	int getValue() const { return value; }
	void setValue(int v) { value = v; }
};

int main()
{
	cout<<"it's main"<<endl;
}