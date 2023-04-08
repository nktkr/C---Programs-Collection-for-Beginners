// print reverse order and print sum of its element of an array

// Reverse an array using for loop

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of size of array: ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter " << i + 1 << "th Element:";
    cin >> arr[i];
  }

  int sum = 0;
  cout << "\nReverse order of the array: \n";
  for (int i = (n - 1); i >= 0; i--)
  {
    cout << arr[i] << " ";
    sum += arr[i];
  }
  cout << "\nSum of the array :" << sum << endl;
  return 0;
}