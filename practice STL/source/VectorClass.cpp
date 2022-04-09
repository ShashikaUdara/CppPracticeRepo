#include "VectorClass.h"

VectorClass :: VectorClass()
{
	cout<<"Constructor"<<endl;
}

VectorClass :: ~VectorClass()
{
	cout<<"Distructor"<<endl;
}

bool VectorClass :: com(int x, int y)
{
	return x > y;
}

void VectorClass :: vectorBasics()
{
	int i=0;
	cout<<"vectorBasics()"<<endl;
	// C++ STL
	vector<int> A = {23,78, 56,12, 11, 90};
	for(i=0; i<A.size(); i++)
	{
		cout<<A[i]<<endl;
	}

	cout<<"Sorted.."<<endl;
	sort(A.begin(), A.end());
	for(i=0; i<A.size(); i++)
	{
		cout<<A[i]<<endl;
	}

	cout<<"Has 11- "<<binary_search(A.begin(), A.end(), 11)<<endl; // true
	cout<<"Has 150- "<<binary_search(A.begin(), A.end(), 150)<<endl; // false

	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);

	// lower bound of 100
	vector<int>:: iterator it1 = lower_bound(A.begin(), A.end(), 100);
	cout<<"lower bound of 100- "<<*it1<<endl;

	vector<int>:: iterator it2 = upper_bound(A.begin(), A.end(), 100);
	cout<<"upper bound of 100- "<<*it2<<endl;
	cout<<"it2 - it1: "<<it2 - it1<<endl;

	// make vector in to decending order
	VectorClass vc;
	sort(A.begin(), A.end(), VectorClass::com);

	auto it3 = lower_bound(A.begin(), A.end(), 100);
	auto it4 = upper_bound(A.begin(), A.end(), 100);
	cout<<"lower bound of 100- "<<*it3<<endl;
	cout<<"upper bound of 100- "<<*it4<<endl;
	cout<<"it4 - it3: "<<it4 - it3<<endl;

	cout<<"not using reference variable"<<endl;
	for(int x : A)
	{
		x++;
		cout<< x << " ";
	}
	cout<<"\n";

	// looping threough the vctor
	vector<int> :: iterator it5;
	for(it5 = A.begin(); it5 != A.end(); it5++)
	{
		cout<< *it5 << " ";
	}
	cout<<"\n";

	auto it6 = A.begin();
	for(it6 = A.begin(); it6 != A.end(); it6++)
	{
		cout<< *it6 << " ";
	}
	cout<<"\n";

	// altering the values while iterating
	for(int &x : A)
	{
		x++;
		cout<<x<<" ";
	}
	cout<<"\n";

	cout<<"iterating again"<<endl;
	for(int &x : A)
	{
		cout<<x<<" ";
	}
	cout<<"\n";
}
