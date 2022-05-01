#include <iostream>
#include "Quick.h"

using namespace std;

int main()
{
	cout<<"it's main"<<endl;
	int arr[] = {6, 4, 2, 1, 5, 9, 8};
	cout<<"1"<<endl;
	Quick * quick = new Quick;
	cout<<"2"<<endl;
	quick->quickSort(arr, 0, 7);
	cout<<"3"<<endl;
}