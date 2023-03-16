// 23. Program to Print Half Pyramid Pattern using Numbers Program

#include <iostream>
using namespace std;

int main()
{
  int rows;
  cout << "Enter the number of rows in the pyramid : ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}