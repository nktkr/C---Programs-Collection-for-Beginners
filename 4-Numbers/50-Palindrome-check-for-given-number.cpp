// 50. Palindrome Check for a given Number

#include<iostream>
using namespace std;

int main()
{
  long long num;
  cout << "Enter the number to check for palindrome:";
  cin >> num;
  long long photocopy = num;
  long long reverse = 0;
  long long mult = 1;
  while(photocopy > 0)
  {
    
    reverse = reverse * 10 + (photocopy % 10);
    mult *= 10;
    photocopy /= 10;
  }
  if(reverse == num)
    cout << "The number is a Palindrome number." << endl;
  else
    cout << "The number is not a Palindrome number" << endl;
  
  return 0;
}