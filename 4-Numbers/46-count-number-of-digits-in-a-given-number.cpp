// 46. Count Number of Digits in a given Number

#include<iostream>

using namespace std;

int main()
{
  long long num;
  cout << "Enter the number to get no. of digits: ";
  cin >> num;
  int count = 0;
  while(num > 0)
  {
    num /= 10;
    count++;
  }
  cout << "Entered number has " << count << " digits." << endl;
  return 0;
}