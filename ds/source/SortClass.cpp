#include "SortClass.h"

SortClass :: SortClass()
{
	cout<<"Constructor - SortClass"<<endl;
}

SortClass :: ~SortClass()
{
	cout<<"Distructor - SortClass"<<endl;
}

int* SortClass :: bubble(int* iarrInput, int count)
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
