#ifndef _QUICK_H_
#define _QUICK_H_

#include <iostream>

using namespace std;

class Quick
{
public:
	void quickSort(int * arr, int low, int high);
	int partition(int * arr, int low, int high);
};

#endif