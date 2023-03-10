// 7. Program To Find Sum Of Series 1 + 1 / 2 ^ 2 + 1 / 3 ^ 3 + . . . . . . . . . . . . 1 / n ^ n
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n;
  float sum = 0;
  cout << "Enter the value :";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + float(1/pow(i, i));
  }
  cout << "Sum =" << sum;
  return 0;
}