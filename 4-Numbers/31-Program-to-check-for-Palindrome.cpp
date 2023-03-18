// 31. Program To Check Number Is Palindrome Or Not

#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
  int temp = num;
  int reverseNum = 0;
  while (temp > 0)
  {
    reverseNum = reverseNum * 10 + temp % 10;
    temp = temp / 10;
  }
  if (reverseNum == num)
    return true;
  else
    return false;
}

int main()
{
  int num;
  cout << "Enter the number to check for Palindrome: ";
  cin >> num;

  if (isPalindrome(num))
    cout << num << " is Palindrome number.";
  else
    cout << num << " is not a Palindrome number.";
  return 0;
}