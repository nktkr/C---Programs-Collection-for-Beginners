// 39. Program to Find GCD (Greatest Common Divisor) using functions

// i. Naive Solution

// #include <iostream>

// using namespace std;

// int main()
// {
//   int num1, num2, smallerNum, GCD;
//   cout << "Enter first number: ";
//   cin >> num1;
//   cout << "Enter second number: ";
//   cin >> num2;

//   smallerNum = min(num1, num2);

//   for (int i = 1; i <= smallerNum; i++)
//   {
//     if (num1 % i == 0)
//       GCD = i;
//   }
//   return 0;
// }

// i. Euclidian theorem
/*
Pseudo Code of the Algorithm-
Step 1:  Let  a, b  be the two numbers
Step 2:  a mod b = R
Step 3:  Let  a = b  and  b = R
Step 4:  Repeat Steps 2 and 3 until  a mod b  is greater than 0
Step 5:  GCD = b
Step 6: Finish
*/

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
  int a = 105, b = 30;
  cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
  return 0;
}