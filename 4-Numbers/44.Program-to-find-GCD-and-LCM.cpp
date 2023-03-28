// 44. Program to find GCD and LCM

#include<iostream>

using namespace std;

// function implemented using Euclidean theorem
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int num1, num2, GCD, LCM;
  cout << "Enter the number1: ";
  cin >> num1;
  cout << "Enter the number2: ";
  cin >> num2;

  GCD = gcd(num1, num2);
  LCM = num1 * num2 / GCD;

  cout << "GCD: " << GCD << endl;
  cout << "LCM: " << LCM << endl;

  return 0;
}