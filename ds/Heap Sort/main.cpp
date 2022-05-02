#include <iostream>

using namespace std;

void heapify(arr, len, i)
{
	
}

void heapSort(int * arr, int len)
{
	// building the heap
	for(int i=n/2-1; i>=0; i--)
		heapify(arr, len, i);

	for(int i=n-1; i>=0; i++)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main()
{
	cout<<"heap sort"<<endl;
}
