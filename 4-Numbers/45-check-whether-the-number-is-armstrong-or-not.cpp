// 45. Check whether the number is Armstrong or not

#include <iostream>
using namespace std;

int main()
{
  long long num;
  cout << "Enter the number the check Armstrong: ";
  cin >> num;

  long long reverse = 0;
  long long multFact = 1;
  for (long long i = num; i > 0; i /= 10)
  {
    reverse = reverse * 10 + (i % 10);
    multFact *= 10;
  }
  if (reverse == num)
    cout << num << " is Armstrong number." << endl;
  else
    cout << num << " is Not a Armstrong number." << endl;
  return 0;
}

// The C++ language specification defines long long as a valid type specifier for a 64-bit integer. However, for compatibility with older C compilers, long long int is also accepted as a valid type specifier for a 64-bit integer in C++.