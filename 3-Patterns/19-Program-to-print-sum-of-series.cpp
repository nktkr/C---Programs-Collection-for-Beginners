// Program To Find Sum Of Series 1 / 2 + 4 / 5 + 7 / 8 + . . . . . . . . .n

#include <iostream>

using namespace std;

int main()
{
  int n;
  double sum = 0, Nr = 1, Dr = 2;
  cout << "Enter the number of terms in the series : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + Nr / (Nr + 1);
    Nr = Nr + 3;
  }
  cout << "\nSum of the Series = " << sum;
  return 0;
}