#include <iostream>

using namespace std;

class Apple
{
	int _n=0, _d=1;
public:
	Apple(int numarator=0, int denominator=1) : _n(numarator), _d(denominator) {}
	Apple(const Apple & rhs) : _n(rhs._n), _d(rhs._d) {}
	~Apple(){_n=0, _d=1;}

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	// Apple operator + (const Apple &) const;
	// Apple operator - (const Apple &) const;
	// Apple operator * (const Apple &) const;
	// Apple operator / (const Apple &) const;
};

Apple operator + (const Apple & lhs, const Apple & rhs)
{
	return Apple((lhs.numarator()*rhs.denominator() + lhs.denominator()*rhs.numarator()), lhs.denominator()*rhs.denominator());
}

Apple operator - (const Apple & lhs, const Apple & rhs)
{
	return Apple((lhs.numarator()*rhs.denominator() - lhs.denominator()*rhs.numarator()), lhs.denominator()*rhs.denominator());
}

Apple operator * (const Apple & lhs, const Apple & rhs)
{
	return Apple(lhs.numarator()*rhs.numarator(), rhs.denominator()*rhs.denominator());
}

Apple operator / (const Apple & lhs, const Apple & rhs)
{
	return Apple(lhs.numarator()*rhs.numarator(), rhs.denominator()*rhs.denominator());
}

std::ostream & operator << (std::ostream & o, const Apple & a)
{
	return o << a.numarator() << "/" << a.denominator();
}

int main()
{
	Apple a = 7;
	cout << "a is: " << a << endl; // 7/1

	Apple b(3, 8);
	cout << "b is: " << b << endl; // 3/8	

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	cout << "a" << " + " << "8" << " = " << 14/2 + 8 << endl;
	cout << "a" << " - " << "8" << " = " << 14/2 - 8 << endl;
	cout << "a" << " * " << "8" << " = " << 14/2 * 8 << endl;
	cout << "a" << " / " << "8" << " = " << 14/2 / 8 << endl;
}