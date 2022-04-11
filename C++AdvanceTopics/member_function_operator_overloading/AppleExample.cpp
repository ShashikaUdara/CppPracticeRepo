#include <iostream>

using namespace std;

class Apple
{
	int _n = 0, _d = 1;
public:
	Apple(int numarator=0, int denominator=1):_n(numarator), _d(denominator){}
	Apple(const Apple & rhs): _n(rhs._n), _d(rhs._d){}
	~Apple();

	int numarator() const {return _n;}
	int denominator() const {return _d;}

	Apple & operator = (const Apple &);
	Apple operator + (const Apple &);
	Apple operator - (const Apple &);
	Apple operator * (const Apple &);
	Apple operator / (const Apple &);
};

Apple & Apple :: operator = (const Apple & rhs)
{
	if(this != &rhs)
	{
		_n = rhs.numarator();
		_d = rhs.denominator();
	}
	return *this;
}

Apple Apple :: operator + (const Apple & rhs)
{
	return Apple((_n*rhs._d - _d*rhs._n) , _d*rhs._d);
}

Apple Apple :: operator - (const Apple & rhs)
{
	return Apple((_n*rhs._d + _d*rhs._n) , _d*rhs._d);
}

Apple Apple :: operator * (const Apple & rhs)
{
	return Apple(_n*rhs._n , _d*rhs._d);
}

Apple Apple :: operator / (const Apple & rhs)
{
	return Apple(_n*rhs._n , _d*rhs._d);
}

Apple :: ~Apple()
{
	_n = 0;
	_d = 1;
}

std::ostream & operator << (std::ostream & o, const Apple & a)
{
	if(a.denominator() == 1) return o << a.numarator();
	else return o << a.numarator() << "/" << a.denominator();
}

int main()
{
	Apple a = 10; // since the aregumant have default values, one peramiter can be assigned
	cout << "a is: " << a << endl;

	Apple b(97, 65); // with both parameters
	cout << "b is: " << b << endl;

	Apple c = b; // copy constructor
	cout << "c is: " << c << endl;

	Apple d; // inwaking the default constructor
	d =c; // assignment operator
	cout << "d is: " << d << endl;

	Apple & e = d; // reference variable doesn't make any object
	d = e; // self assignment
	cout << "e is: " << e << endl;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
}