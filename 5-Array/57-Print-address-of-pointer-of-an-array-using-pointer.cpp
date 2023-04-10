// C++ Program To Print Address Of Pointer Of An Array Using Pointer

#include<iostream>

using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the array:";
  cin >> size;

  int arr[size];

  // int *ptr = arr;
  // cout << ptr; 

  for(int i = 0; i < size; i++)

  cout <<" Address of " << i << "th elements is :" << &arr[i] << "\n";


  return 0;
}