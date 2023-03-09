#include <iostream>
using namespace std;
// int main()
// {
//   int n, sum = 0;
//   cout << "\nEnter the value of n : ";
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     sum = sum + i;
//   }
//   cout << "\nSum = " << sum << endl;
//   return 0;
// }


// Optimized Solution
int main()
{
  int n, sum = 0;
  cout << "\nEnter the value of n : ";
  cin >> n;
  sum = n*(n+1)/2;  //using the formula
  cout << "\nSum = " << sum << endl;
  return 0;
}
