#include "SortClass.h"

SortClass :: SortClass()
{
	cout<<"Constructor - SortClass"<<endl;
}

SortClass :: ~SortClass()
{
	cout<<"Distructor - SortClass"<<endl;
}

int* SortClass :: bubbleSort(int* iarrInput, int count)
{
	cout<<"int SortClass :: bubble(int* iarrInput)"<<endl;

	int i=0, j=0, iTemp = 0;

	cout<<"count- "<<count<<endl;

	for(i=0; i<count-1; i++)
	{
		for(j=0; j<count-1-i; j++)
		{
			if(iarrInput[j] > iarrInput[j+1])
			{
				iTemp = iarrInput[j];
				iarrInput[j] = iarrInput[j+1];
				iarrInput[j+1] = iTemp;
			}
		}
	}

	return iarrInput;
}

int* SortClass :: quickSort(int* iarrInput, int low, int high)
{
	int pi = 0;
	// cout<<"1"<<endl;
	if(low < high)
	{
		// cout<<"2"<<endl;
		pi = partition(iarrInput, low, high);
		// cout<<"3"<<endl;
		quickSort(iarrInput, low, pi);
		// cout<<"4"<<endl;
		quickSort(iarrInput, pi+1, high);
		// cout<<"5"<<endl;
	}

	return iarrInput;
}

int SortClass :: partition(int* iarrInput, int low, int high)
{
	// cout<<"6"<<endl;
	int i = low-1;
	int j = 0, iTemp = 0;
	// cout<<"7"<<endl;
	int iPivote = iarrInput[high-1];
	cout<<"iPivote- "<<iPivote<<endl;

	for(j=0; j<high; j++)
	{
		// cout<<iPivote<<" 9"<<endl;
		if(iarrInput[j] <= iPivote)
		{
			// swap
			i++;
			iTemp = iarrInput[i];
			// cout<<iPivote<<" 10"<<endl;
			iarrInput[i] = iarrInput[j];
			// cout<<iPivote<<" 11"<<endl;
			iarrInput[j] = iTemp;
			// cout<<iPivote<<" 12"<<endl;
		}
	}
	i++;
	iTemp = iarrInput[i];
	// cout<<iPivote<<" 13"<<endl;
	iarrInput[i] = iarrInput[j];
	// cout<<iPivote<<" 14"<<endl;
	iarrInput[j] = iTemp;
	// cout<<iPivote<<" 15"<<endl;

	return i;
}