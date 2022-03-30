#include <iostream>
#include "SortClass.h"

using namespace std;

int main()
{
  int i=0, iSize = 0;
  int sArray[11]= { 89,78,23,5,3,8,54,98,12,45,90 };
  int* array = &(sArray[0]);

	cout<<"it's main"<<endl;
  iSize = sizeof(sArray)/sizeof(int);

  SortClass* sort = new SortClass();
  int* sortedPtr = sort->bubble(array, iSize);

  for(i=0; i<iSize; i++)
  {
    cout<<""<<sortedPtr[i]<<endl;
  }
}
