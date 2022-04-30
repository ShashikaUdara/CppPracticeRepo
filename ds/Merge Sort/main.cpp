#include <iostream>
#include "MergeSort.h"

using namespace std;

int main()
{
	cout<<"merge sort"<<endl;
	int arr[] = {5 ,6, 7, 3, 8, 1};

	MergeSort * _mergeSort;
	_mergeSort->mergeSort(arr, 0, 5);

	int i=0;
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<endl;
		cout<<"1"<<endl;
	}
}