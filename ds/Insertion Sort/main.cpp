#include <iostream>

using namespace std;

void insertionSort(int * arr, int len)
{
	int key = 0;
	int j = 0;

	for(int i=1; i<len; i++)
	{
		key = arr[i];
		j = i -1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}
}

void display(int * arr, int len)
{
	for( int i=0; i<len; i++)
	{
		cout<<arr[i]<<" - ";
	}
	cout<<endl;
}

int main()
{
	cout<<"it's main"<<endl;
	int arr[] = {8,7,90,2,5,1,12,9};

	int len = sizeof(arr)/sizeof(arr[0]);

	// display sorted array
	display(arr, len);

	// sorting happense here
	insertionSort(arr, len);

	// display sorted array
	display(arr, len);
}