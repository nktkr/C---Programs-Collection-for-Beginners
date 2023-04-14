// 58. Program To Check Evenness / Oddness Of An Array

#include<iostream>

using namespace std;

string isEven(int n)
{
  if(n % 2 == 0)
    return " is Even";
  return " is Odd";
}

int main()
{
  int size;
  cout << "Enter the size of the array:";
  cin >> size;
  int arr[size];

  cout << "Enter the elements of the array:";
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << isEven(arr[i]) << "\n";
  }
  return 0;

}