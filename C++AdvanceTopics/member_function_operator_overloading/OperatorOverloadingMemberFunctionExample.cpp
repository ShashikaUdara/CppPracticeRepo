#include <iostream>

using namespace std;

class Rational
{
	int _n = 0;
	int _d = 1;
public:
	Rational(int numarator = 0, int denominator = 1) : _n(numarator), _d(denominator) {} // overloaded constructor
	Rational(const Rational & rhs) _n(rhs._n), _d(rhs._d) {} // copy constructor
	~Rational(); // destructor

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	Rational & operator = (const Rational & );
	Rational operator = (const Rational & ) const;
	Rational operator = (const Rational & ) const;
	Rational operator = (const Rational & ) const;
	Rational operator = (const Rational & ) const;
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

Rational Rational :: operator = (const Rational & rhs) const
{

}

Rational Rational :: operator = (const Rational & rhs) const
{

}

Rational Rational :: operator = (const Rational & rhs) const
{

}

Rational Rational :: operator = (const Rational & rhs) const
{

}


int main()
{

}  