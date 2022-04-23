#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cout<<"it's bag example"<<endl;
	int choice;
	BagBuilder * bag_builder = new BagBuilder;
	Bag * bag;

	cout<<"Please enter your bag_builder type"<<endl;
	cout<<"1. School"<<endl;
	cout<<"2. Practice"<<endl;
	cout<<"3. Camping"<<endl;
	cout<<"Your choice: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			bag_builder = new School("School Bag");
			break;
		case 2:
			bag_builder = new Practice("Practice Bag");
			break;
		case 1:
			bag_builder = new Camping("Camping Bag");
			break;
		default:
			cout<<"Wrong input"<<endl;
			bag_builder = NULL;
			break;
	}

	if(bag_builder != NULL)
	{
		bag_builder->readyBook();
		bag_builder->readyPen();
		bag_builder->readyLunch();

		bag = bag_builder->getType();
		cout<<bag->showBag()<<endl;
	}
}