#include <iostream>

using namespace std;

class Functor
{
	int multy = 1;
	Functor(){}
public:
	Functor(int n) : multy(n) {}
	// Functor - the function operator
	int operator () (int x) const { return x*multy; }
};

int main()
{
	cout<<"it's main"<<endl;
	const Functor multy_2(2);
	const Functor multy_3(3);
	const Functor multy_4(4);
	const Functor multy_5(5);
	const Functor multy_6(6);

	cout<<"Muliply 11 with 2 - "<<multy_2(11)<<endl;
	cout<<"Muliply 11 with 3 - "<<multy_3(11)<<endl;
	cout<<"Muliply 11 with 4 - "<<multy_4(11)<<endl;
	cout<<"Muliply 11 with 5 - "<<multy_5(11)<<endl;
	cout<<"Muliply 11 with 6 - "<<multy_6(11)<<endl;

	return 0;
}