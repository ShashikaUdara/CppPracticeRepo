// #include <stdafx.h>
#include <iostream>
#include <climits>
#include "VectorClass.h"
#include "SetClass.h"
#include "MapClass.h"

using namespace std;

int main()
{
	// C++ STL
	VectorClass vecObj;
	vecObj.vectorBasics();
	SetClass setObj;
	setObj.setBasics();
	MapClass mapObj;
	mapObj.mapBasics();

	// complex example
	set<pair<int, int>> setTemp;
	setTemp.insert({456, 789});
	setTemp.insert({80, 189});
	setTemp.insert({380, 440});
	setTemp.insert({10, 70});
	setTemp.insert({200, 350});

	set<pair<int, int>> :: iterator it;
	for(it=setTemp.begin(); it!=setTemp.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}

	// cout<<"INT_MAX- "<<INT_MAX<<endl;
	// finding the upper bound of the set for 100
	int point = 100;
	auto it1 = setTemp.upper_bound({point, INT_MAX});
	if(it1 == setTemp.begin())
	{
		cout<<"point is not with in the given intervals"<<endl;
		return -1;
	}

	it1--;
	pair<int, int> currentPair = *it1;
	if(currentPair.first<=point && currentPair.second>=point)
		cout<<"Point is available in the "<<currentPair.first<<"-"<<currentPair.second<<" interval"<<endl;
	else
	{
		cout<<"Pair is not available int the intervals"<<endl;
	}
}