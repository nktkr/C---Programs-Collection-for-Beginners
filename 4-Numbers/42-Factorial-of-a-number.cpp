// 42. Factorial of a given Number Program

#include <iostream>
using namespace std;
int main()
{
  int n;
  unsigned long long factorialRes = 1;
  cout << "Enter the number: ";
  cin >> n;

  while(n>0)
  {
    factorialRes *= n;
    n -= 1;
  }
  cout << "Factorial of " << n << " is " << factorialRes << endl;
  return 0;
}
