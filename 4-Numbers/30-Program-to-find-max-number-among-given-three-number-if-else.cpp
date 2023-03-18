// 30. Program To Find Max Number Among Given Three Number Using If/Else Statements

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cout << "Enter the numbers: ";
  cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3)
    cout << num1 << " is the largest number.";
  else if (num2 > num1 && num2 > num3)
    cout << num2 << " is the largest number.";
  else
    cout << num3 << " is the largest number.";
  return 0;

}