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

	// prefix increment operator - pre-increment
	Number & operator ++ ();

	// postfix increment operator - post-increment
	Number & operator ++ (int);

	// prefix decrement operator - pre-decrement
	Number & operator -- ();

	// postfix decrement operator - post-decrement
	Number & operator -- (int);

};

int main()
{
	cout<<"it's main"<<endl;
}