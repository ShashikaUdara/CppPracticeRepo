#include <iostream>
#include <cstdio>

using namespace std;

class Rational
{
	int _n = 0;
	int _d = 1;
public:
	Rational(int numarator = 0, int denominator = 1) : _n(numarator), _d(denominator) {} // overloaded constructor
	Rational(const Rational & rhs): _n(rhs._n), _d(rhs._d) {} // copy constructor
	~Rational(); // destructor

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	Rational & operator = (const Rational & );
	Rational operator + (const Rational & ) const;
	Rational operator - (const Rational & ) const;
	Rational operator * (const Rational & ) const;
	Rational operator / (const Rational & ) const;
};

// implementation 
Rational & Rational :: operator = (const Rational & rhs)
{
	if(this != &rhs)
	{
		_n = rhs.numarator();
		_d = rhs.denominator();
	}

	return *this;
}

Rational Rational :: operator + (const Rational & rhs) const
{
	return Rational((_n*rhs._d) + (_d*rhs._n), _d*rhs._d);
}

Rational Rational :: operator - (const Rational & rhs) const
{
	return Rational((_n*rhs._d) - (_d*rhs._n), _d*rhs._d);
}

Rational Rational :: operator * (const Rational & rhs) const
{
	return Rational(_n*rhs._n, _d*rhs._d);
}

Rational Rational :: operator / (const Rational & rhs) const
{
	return Rational(_n*rhs._n, _d*rhs._d);
}

Rational :: ~Rational()
{
	_n = 0;
	_d = 1;
}

std::ostream & operator << (std::ostream & o, const Rational & r)
{
	if(r.denominator() == 1)
		return o << r.numarator();
	else
		return o << r.numarator() << '/' << r.denominator();
}

int main()
{
	Rational a=7; // since there are some default values for the paramiters, no denominator paramiter is needed
	cout<<"a is: "<< a <<endl;

	Rational b(5, 3); // with both arguments numarator and denominator
	cout<<"b is: "<< b <<endl;

	Rational c = b; // copy constructor
	cout<<"c is: "<<c<<endl;

	Rational d; // calls the default constructor
	d = c;
	cout<<"d is: "<<d<<endl;

	Rational & e = d; // creating a reference varible makes no object
	cout<<"e is: "<<e<<endl;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl; 
}  