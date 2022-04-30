#include "MergeSort.h"

void MergeSort :: mergeSort(int arr[], int l, int r)
{
	if(l < r)
	{
		int m = l + (r - l)/2;
		mergeSort(arr, l, m); // left side array
		mergeSort(arr, m+1, r); // right side array

		merge(arr, l, m, r);
	}
}

void MergeSort :: merge(int arr[], int l, int m, int r)
{
	int nl = m - l + 1;
	int nr = r - m;

	// creating tempory arrays
	int left[nl];
	int right[nr];

	// assigning values
	int i = 0, j = 0, k=0;
	for(i=0; i<nl; i++)
	{
		left[i] = arr[i];
	}

	for(j=0; j<nr; j++)
	{
		right[j] = arr[i+m+1];
	}

	i = 0, j = 0, k=0;
	// merging goes here
	while(i < nl && j < nr)
	{
		if(left[i] <= right[j])
		{
			arr[k] = left[i];
			i++;
		}
		else
		{
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	//coping the remaining values to the array
	while(i < nl)
	{
		arr[k] = left[i];
		i++, k++;
	}

	while(j < nr)
	{
		arr[k] = right[j];
		j++, k++;
	}
}
