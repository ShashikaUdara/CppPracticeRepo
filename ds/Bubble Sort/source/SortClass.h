#ifndef _SORT_CLASS_H_
#define _SORT_CLASS_H_

#include <iostream>

using namespace std;

class SortClass
{
public:
	SortClass();
	~SortClass();
	int* bubbleSort(int* iarrInput, int count);
	int* quickSort(int* iarrInput, int low, int high);
	int partition(int* iarrInput, int low, int high);
};

#endif