#include "SetClass.h"

SetClass :: SetClass()
{
	cout<<"Constructor - SetClass"<<endl;
}

SetClass :: ~SetClass()
{
	cout<<"Distructor - SetClass"<<endl;
}

void SetClass :: setBasics()
{
	cout<<"setBasics()"<<endl;
	set<int> setDemo;
	setDemo.insert(56);
	setDemo.insert(23);
	setDemo.insert(1);
	setDemo.insert(76);
	setDemo.insert(65);
	setDemo.insert(44);
	setDemo.insert(-1);
	setDemo.insert(-43);

	for(auto x : setDemo)
		cout<<x<<" ";
	cout<<endl;

	// finding a value
	auto it1 = setDemo.find(75);
	if(it1 == setDemo.end())
	{
		cout<<"Not found"<<endl;
	}
	else
	{
		cout<<"Found- "<< *it1<<endl;
	}

	auto it2 = setDemo.upper_bound(-1);
	auto it3 = setDemo.upper_bound(80);

	if(it2 == setDemo.end())
		cout<<"not found -1"<<endl;
	else
		cout<<"upper bound -1 = "<<*it2<<endl;
	
	if(it3 == setDemo.end())
		cout<<"not found 80"<<endl;
	else
		cout<<"upper bound 80 = "<<*it3<<endl;
	
}
