#include<iostream>

using namespace std;

double AvgOfArr(int *arr, int size)
{
  double sum = 0;
  for(int i = 0; i < size; i++)
  {
    sum += arr[i]; 
  }
  return sum / size; //calculated average
}

int main()
{
  int size;
  cout << "Size of array: ";
  cin >> size;

  int arr[size];
  
  cout << "Enter the elements of the array: ";
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Average of the array: " << AvgOfArr(arr, size) << endl;
  return 0;
}