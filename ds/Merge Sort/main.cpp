#include <iostream>
#include "MergeSort.h"

using namespace std;

int main()
{
	cout<<"merge sort"<<endl;
	int i=0;
	int arr[] = {5 ,6, 7, 3, 8, 1};
	
	for(i=0; i<6; i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;

	MergeSort * _mergeSort;
	_mergeSort->mergeSort(arr, 0, 5);

	for(i=0; i<6; i++)
	{
		cout<<arr[i]<<endl;
	}
}