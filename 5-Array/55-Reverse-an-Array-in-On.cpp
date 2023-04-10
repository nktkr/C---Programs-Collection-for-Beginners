// Following are the various ways to get the reverse array in the C++ programming language.

#include<iostream>
using namespace std;

void RevArr(int *arr, int size)
{
  for(int i = 0; i < size -1; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size - 1];
    arr[size - 1] = temp;
    size--;
  }
}

int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[size];

  cout << "Enter the elements of the array: ";
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  RevArr(arr, size);
  
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}