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
	Number operator ++ (int);

	// prefix decrement operator - pre-decrement
	Number & operator -- ();

	// postfix decrement operator - post-decrement
	Number operator -- (int);

};

// prefix increment operator - pre-increment
Number & Number :: operator ++ ()
{
	cout<<"prefix increment: ";
	value += 1;
	return *this;
}

// postfix increment operator - post-increment
Number Number :: operator ++ (int)
{
	cout<<"postfix increment: ";
	Number temp = *this;
	value +=1;
	return temp;
}

// prefix decrement operator - pre-decrement
Number & Number :: operator -- ()
{
	cout<<"prefix decrement: ";
	value -= 1;
	return *this;
}

// postfix decrement operator - post-decrement
Number Number :: operator -- (int)
{
	cout<<"postfix decrement: ";
	Number temp = *this;
	value -=1;
	return temp;
}

ostream & operator <<  (ostream & o, const Number & n)
{
	return o << n.getValue();
}

int main()
{
	cout<<"it's main"<<endl;
	Number num(64);
	cout<<"Value is: "<<num<<endl;
	cout<<"Value is: "<<num++<<endl;
	cout<<"Value is: "<<num<<endl;
	cout<<"Value is: "<<num--<<endl;
	cout<<"Value is: "<<num<<endl;
	cout<<"Value is: "<<++num<<endl;
	cout<<"Value is: "<<num<<endl;
	cout<<"Value is: "<<--num<<endl;
	cout<<"Value is: "<<num<<endl;
}