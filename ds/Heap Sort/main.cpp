#include <iostream>

using namespace std;

void heapify(int * arr, int len, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	// if the left chiled is grater than the root
	if(l<len && arr[l] > arr[largest])
		largest = l;

	// if the right chiled is grater than the root
	if(r<len && arr[r] > arr[largest])
		largest = r;

	// if the larget is not the root
	if(largest != i)
	{
		swap(arr[largest], arr[i]);
		heapify(arr, len, largest);
	}
}

void heapSort(int * arr, int len)
{
	// building the heap
	for(int i=len/2-1; i>=0; i--)
		heapify(arr, len, i);

	for(int i=len-1; i>=0; i--	)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

void display(int * arr, int len)
{
	for(int i=0; i<len; i++)
	{
		cout<<arr[i]<<" - ";
	}
	cout<<endl;
}

int main()
{
	cout<<"heap sort"<<endl;
	int arr[] = {12, 11, 13, 5, 6, 7 };
	int len = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before sort"<<endl;
	display(arr, len);

	// heap sort goes here
	heapSort(arr, len);

	cout<<"After sort"<<endl;
	display(arr, len);
}
