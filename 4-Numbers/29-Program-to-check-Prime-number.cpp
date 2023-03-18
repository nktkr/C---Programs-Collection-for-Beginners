// Program to check number is prime or not using if else statement

#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int num)
{
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int num;
  cout << "Enter the number to check Prime or Not: ";
  cin >> num;
  if(checkPrime(num))
    cout << num << " is a Prime number";
  else
    cout << num << " is not a Prime number";
  return 0;
}