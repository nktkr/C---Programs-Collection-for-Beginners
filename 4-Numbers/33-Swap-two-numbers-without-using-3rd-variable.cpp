// 33. Program Swap Two numbers without using 3rd variable

#include<iostream>
using namespace std;

int main()
{
  int num1, num2;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  cout << "First number: " << num1 << "\nSecond number: " << num2 << endl;
  return 0;
} 

