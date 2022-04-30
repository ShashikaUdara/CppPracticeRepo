#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_

#include <iostream>
#include <unistd.h>

using namespace std;

class MergeSort
{
public:
	void mergeSort(int arr[], int l, int r);
	void merge(int arr[], int l, int m, int r);
};

#endif