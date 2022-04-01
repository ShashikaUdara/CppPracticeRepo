#include <iostream>
#include "SortClass.h"

using namespace std;
void displayArray(int* iarrInput, int len)
{
  int i=0;
  for(i=0; i<len; i++)
    cout<<iarrInput[i]<<", "; 
  cout<<""<<endl; 
}

int main()
{
  int i=0, iSize = 0;
  int sArray1[11]= { 89,78,23,5,3,8,54,98,12,45,90 };
  int* array1 = &(sArray1[0]);

	cout<<"it's main"<<endl;
  iSize = sizeof(sArray1)/sizeof(int);

  SortClass* sort = new SortClass();

  cout<<"============== Before Bubble Sort =============="<<endl;
  displayArray(array1, iSize);

  cout<<"============== After Bubble Sort =============="<<endl;
  // int* sortedPtr = sort->bubbleSort(array1, iSize);
  sort->bubbleSort(array1, iSize);
  displayArray(array1, iSize);

  // quick sort
  int sArray2[21]= { 89,56,12,98,76,43,23,99,55,22,11,98,5,4,8,3,4,2,9,8,10 };
  int* array2 = &(sArray2[0]);
  iSize = sizeof(sArray2)/sizeof(int);
  cout<<"iSize: "<<iSize<<endl;

  cout<<"============== Before Quick Sort =============="<<endl;
  displayArray(array2, iSize);

  cout<<"============== After Quick Sort =============="<<endl;
  int* sortedPtr = sort->quickSort(array2, 0, iSize);
  displayArray(sortedPtr, iSize);
}
