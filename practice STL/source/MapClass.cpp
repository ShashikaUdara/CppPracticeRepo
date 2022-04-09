#include "MapClass.h"

MapClass :: MapClass()
{
	cout<<"Constructor - MapClass"<<endl;
}

MapClass :: ~MapClass()
{
	cout<<"Distructor - MapClass"<<endl;
}

void MapClass :: mapBasics()
{
	cout<<"mapBasics()"<<endl;
	cout<<"int, int"<<endl;
	map<int, int> mapDemo;
	mapDemo[0] = 23;
	mapDemo[1] = 56;
	mapDemo[2] = 87;
	mapDemo[103] = 54;
	mapDemo[150] = 12;

	map<int, int> :: iterator it1;
	for(it1 = mapDemo.begin(); it1 != mapDemo.end(); it1++)
	{
		cout<<it1->first<<" - "<<it1->second<<endl;
	}

	cout<<"string, int"<<endl;
	map<string, int> mapChar;
	// mapChar["qwer"] = 123;
	// mapChar["aasdf"] = 467;
	// mapChar["rtu"] = 3;
	// mapChar["dhjgf"] = 5667;
	// mapChar["cvncvvb"] = 967;

	mapChar.insert(pair<string, int>("qwer", 123));
	mapChar.insert(pair<string, int>("aasdf", 15));
	mapChar.insert(pair<string, int>("rtu", 56));
	mapChar.insert(pair<string, int>("dhjgf", 20));
	mapChar.insert(pair<string, int>("cvncvvb", 98));

	map<string, int> :: iterator it2;
	for(it2=mapChar.begin(); it2!=mapChar.end(); it2++)
	{
		cout<<it2->first<<" - "<<it2->second<<endl;
	}

	string apple = "My name is Udara Abeyrathne";
	map<char, int> cntStr;

	for(char x : apple)
	{
		cntStr[x]++;
	}

	map<char, int> :: iterator it3;
	for(it3=cntStr.begin(); it3!=cntStr.end(); it3++)
	{
		cout<<it3->first<<" - "<<it3->second<<endl;
	}
}
