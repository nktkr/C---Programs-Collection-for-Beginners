// Find the Reverse of the Entered Number

#include<iostream>
using namespace std;

int main()
{
  int num, reverse = 0;
  cout << "Enter the number: ";
  cin >> num;

  while(num > 0)
  {
    reverse = reverse * 10 + (num % 10);
    num /= 10;
  }
  cout << "reverse: " << reverse << endl;
  return 0;
}