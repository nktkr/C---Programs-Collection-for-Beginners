// 18. Program to print Half Pyramid using stars *
#include<iostream>
using namespace std;

int main()
{
  int height;
  cout << "Enter the height of Pyramid : ";
  cin >> height;
  for(int i = 1; i <= height; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      cout << " *";
    }
    cout << "\n";
  }
}
