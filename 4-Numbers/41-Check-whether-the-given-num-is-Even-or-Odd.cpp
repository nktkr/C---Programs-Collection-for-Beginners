// 41.  Check whether the given Number is Even or Odd

#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  if (n % 2 == 0)
    cout << n << " is a Even number" << endl;
  else
    cout << n << " is an odd number" << endl;

  return 0;
}