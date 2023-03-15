// 22- Program to print pascal's Triangle
// Naive approach; learn optimised solution during the DSA
// very bad solution; lucid solution on the basis of nCr equivalent of each element
#include <iostream>
#include <string>
using namespace std;

// Returns factorial of n
int fact(int n)
{
  if (n == 0)
    return 1;
  int res = 1;
  for (int i = 2; i <= n; i++)
    res = res * i;
  return res;
}
// fuction to calulate nCr
int nCr(int n, int r)
{
  return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
  int rows;
  cout << "Enter the no. of rows : ";
  cin >> rows;

  for (int i = 0; i < rows; i++)
  {
    for (int k = 1; k <= rows - i; k++)
    {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++)
    {
      if (i == 0 || i == j)
      {
        cout << "1"
             << "  ";
      }
      else
      {
        cout << nCr(i, j) << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}
