#include <iostream>
#include "Quick.h"

using namespace std;

int main()
{
	int arr[] = {6, 4, 2, 1, 5, 9, 8};
	int it = 0;
	for(it=0; it<7; it++)
	{
		cout<<arr[it]<<" - ";
	}
	cout<<endl;

	Quick * quick = new Quick;
	quick->quickSort(arr, 0, 6);

	for(it=0; it<7; it++)
	{
		cout<<arr[it]<<" - ";
	}
	cout<<endl;
}