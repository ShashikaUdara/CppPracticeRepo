#include <iostream>

using namespace std;

class Mango
{
	int _n=0, _d=1;
public:
	Mango(int numarator=0, int denominator=1) :_n(numarator), _d(denominator) {}
	Mango(const Mango & rhs) : _n(rhs._n), _d(rhs._d) {}
	~Mango() {_n=0, _d=1;}

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	// operator overload goes here
	Mango & operator = (const Mango & rhs);
	Mango operator + (const Mango & rhs) const;
	Mango operator - (const Mango & rhs) const;
	Mango operator * (const Mango & rhs) const;
	Mango operator / (const Mango & rhs) const;
};

Mango & Mango :: operator = (const Mango & rhs)
{
	if(this != &rhs)
	{
		_n = rhs.numarator();
		_d = rhs.denominator();
	}
	return *this;
}

Mango Mango :: operator + (const Mango & rhs) const
{
	return Mango((_n*rhs._d + _d*rhs._n), _d*rhs._d);
}

Mango Mango :: operator - (const Mango & rhs) const
{
	return Mango((_n*rhs._d - _d*rhs._n), _d*rhs._d);
}

Mango Mango :: operator * (const Mango & rhs) const
{
	return Mango(_n*rhs._n, _d*rhs._d);
}

Mango Mango :: operator / (const Mango & rhs) const
{
	return Mango(_n*rhs._n, _d*rhs._d);
}

std::ostream operator << (std::ostream & o, const Mango & m)
{
	if(m.denominator() == 1)
	{
		return o << m.numarator();
	}
	else
	{
		return o << m.numarator() << "/" << m.denominator();
	}
}

Mango operator + (const Mango & lhs, const Mango & rhs)
{
	return Mango((lhs.numarator()*rhs.denominator() + lhs.denominator()*rhs.numarator()), lhs.denominator()*rhs.denominator());
}


int main()
{
	const Mango a = 6;
	cout << "a is: " << a << endl;

	const Mango b(7,5);
	cout << "b is: " << b << endl;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << a << " + " << "14" << " = " << a + 14 << endl;
	cout << "14" << " + " << b << " = " << 14 + b << endl;
}