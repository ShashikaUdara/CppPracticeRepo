#include "Quick.h"

void Quick :: quickSort(int * arr, int low, int high)
{
	int pi = 0;
	if(low < high)
	{
		// cout<<"4"<<endl;
		pi = partition(arr, low, high);
		// cout<<"5"<<endl;
		quickSort(arr, low, pi);
		// cout<<"6"<<endl;
		quickSort(arr, pi+1, high);
	}
}

int Quick :: partition(int * arr, int low, int high)
{
	int i = low - 1, j = 0, iTemp = 0, iPivote = arr[high - 1];
	cout<<"5 1"<<endl;
	for(j=0; j< high; j++)
	{
		cout<<"5 2"<<endl;
		if(arr[j] <= iPivote)
		{
			i++;
			// swapping goes here
			iTemp = arr[i];
			arr[i] = arr[j];
			arr[j] = iTemp;
		}
		cout<<"5 3"<<endl;
	}
	cout<<"5 4"<<endl;
	i++;
	iTemp = arr[i];
	arr[i] = arr[j];
	arr[j] = iTemp;

	cout<<"5 5"<<endl;
	return i; // next pivote value
}
