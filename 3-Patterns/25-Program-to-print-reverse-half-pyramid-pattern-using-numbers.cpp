// 25. Program to print Half Pyramid Pattern using Numbers

#include<iostream>
using namespace std;

int main()
{
  int rows;
  cout << "Enter the no. of rows : ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}