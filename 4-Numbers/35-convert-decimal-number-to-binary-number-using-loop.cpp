// 35. Program to Convert Decimal Number To Binary Number Using Loop

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the decimal number to get binary: ";
  cin >> num;

  int binary_num = 0, multiple_num = 1;
  // using for loop
  for (int i = num; i > 0; i = i / 2)
  {
    binary_num = ((i % 2) * multiple_num) + binary_num;
    multiple_num = multiple_num * 10;
  }

  // using while loop
  // while (num > 0)
  // {
  //   binary_num = (num % 2) * multiple_num + binary_num;
  //   multiple_num = multiple_num * 10;
  //   num = num / 2;
  // }

  cout << "Binary equivalent = " << binary_num << endl;

  return 0;
}