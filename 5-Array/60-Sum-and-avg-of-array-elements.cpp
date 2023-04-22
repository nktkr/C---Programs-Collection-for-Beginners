// Find Sum and Average of the Array Elements in C++

#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  int avg = 0;

  for (int i = 0; i < size; i++)
  {
    cout << "Enter " << i+1 << " th element: ";
    cin >> arr[i];
    avg += arr[i];
  }

  cout << "Sum of elements: " << avg << endl;
  cout << "Average of elements: " << avg / size << endl;
}
