#include <iostream>

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
	return Apple((_n*rhs.d) + (_d*rhs._n) , _d*rhs._d)
}

Apple Apple :: operator + (const Apple & rhs)
{
	return Apple((_n*rhs.d) - (_d*rhs._n) , _d*rhs._d)
}

Apple Apple :: operator - (const Apple & rhs)
{
	return Apple((_n*rhs.d) + (_d*rhs._n) , _d*rhs._d)
}

Apple Apple :: operator * (const Apple & rhs)
{
	return Apple(_n*rhs._n , _d*rhs._d)
}

Apple Apple :: operator / (const Apple & rhs)
{
	return Apple(n*rhs._n , _d*rhs._d)
}

Apple :: ~Apple()
{
	_n = 0;
	_d = 1;
}