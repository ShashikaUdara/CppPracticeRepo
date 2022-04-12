#include <iostream>
#include <string>

using namespace std;

class Apple
{
	int _n=0, _d=1;
public:
	Apple(int numarator=0, int denominator=1):_n(numarator), _d(denominator) {}
	Apple(const Apple & rhs):_n(rhs._n), _d(rhs._d) {}
	~Apple(){_n=0, _d=1;}

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	operator std::string() const;
};

// member conversion operator
Apple :: operator std::string() const
{
	if(_d == 1) return std::to_string(_n);
	else return std::to_string(_n) + "/" + std::to_string(_d);
}

// non-member functions
Apple operator + (const Apple & lhs, const Apple & rhs)
{
	return Apple((lhs.numarator()*rhs.denominator() + rhs.numarator()*lhs.denominator()), lhs.denominator()*rhs.denominator());
}

Apple operator - (const Apple & lhs, const Apple & rhs)
{
	return Apple((lhs.numarator()*rhs.denominator() - rhs.numarator()*lhs.denominator()), lhs.denominator()*rhs.denominator());
}

Apple operator * (const Apple & lhs, const Apple & rhs)
{
	return Apple(lhs.numarator()*rhs.numarator(), lhs.denominator()*rhs.denominator());
}

Apple operator / (const Apple & lhs, const Apple & rhs)
{
	return Apple(lhs.numarator()*rhs.numarator(), lhs.denominator()*rhs.denominator());
}

std::ostream & operator << (std::ostream & o, const Apple & a)
{
	// if(a.denominator() == 1) return o << a.numarator();
	// else return o << a.numarator() << "/" << a.denominator();
	return o << std::string(a);
}

int main()
{
	Apple a = 6;
	cout << "a is: " << a << endl;

	Apple b(6, 7);
	cout << "b is: " << b << endl;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	// string and Apple object concatination
	string str = "Apple object: ";
	str += b;
	cout << str << endl;
}