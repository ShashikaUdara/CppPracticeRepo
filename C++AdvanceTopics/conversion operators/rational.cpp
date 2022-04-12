#include <iostream>
#include <string>

using namespace std;

class Rational
{
	int _n=0, _d=1;
public:
	Rational(int numarator=0, int denominator=1) : _n(numarator), _d(denominator) {}
	Rational(const Rational & rhs) : _n(rhs._n), _d(rhs._d) {}
	~Rational(){_n=0, _d=1;}

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	operator std::string() const;

	// Rational operator + (const Rational &) const;
	// Rational operator - (const Rational &) const;
	// Rational operator * (const Rational &) const;
	// Rational operator / (const Rational &) const;
};

Rational operator + (const Rational & lhs, const Rational & rhs)
{
	return Rational((lhs.numarator()*rhs.denominator() + lhs.denominator()*rhs.numarator()), lhs.denominator()*rhs.denominator());
}

Rational operator - (const Rational & lhs, const Rational & rhs)
{
	return Rational((lhs.numarator()*rhs.denominator() - lhs.denominator()*rhs.numarator()), lhs.denominator()*rhs.denominator());
}

Rational operator * (const Rational & lhs, const Rational & rhs)
{
	return Rational(lhs.numarator()*rhs.numarator(), rhs.denominator()*rhs.denominator());
}

Rational operator / (const Rational & lhs, const Rational & rhs)
{
	return Rational(lhs.numarator()*rhs.numarator(), rhs.denominator()*rhs.denominator());
}

std::ostream & operator << (std::ostream & o, const Rational & a)
{
	return o << std::string(a);
}

Rational :: operator std::string() const
{
	if(_d == 1) return std::to_string(_n);
	else return std::to_string(_n) + "/" + std::to_string(_d);
}

int main()
{
	Rational a = 7;
	cout << "a is: " << a << endl; // 7/1

	Rational b(3, 8);
	cout << "b is: " << b << endl; // 3/8	

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	string str = "this is a string: ";
	str += b;

	cout << "str: " << str << endl;
}