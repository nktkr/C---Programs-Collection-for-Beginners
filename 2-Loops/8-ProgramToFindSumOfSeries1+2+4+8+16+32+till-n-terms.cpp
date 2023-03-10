// 8. Program To Find Sum Of Series 1 + 2 + 4 + 8 + 16 + 32 + . . . . . . . . n

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  int multiple = 1;
  cout << "Enter the no. of terms n : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + multiple;
    multiple = multiple * 2;
  }
  cout << "\nSum of the Series = " << sum << endl;
  return 0;
}
