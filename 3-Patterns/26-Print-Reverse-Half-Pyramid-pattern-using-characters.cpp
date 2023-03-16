#include <iostream>
using namespace std;

int main()
{
  int rows;
  cout << "Enter the number of rows in the pyramid: ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << char('A' + j) << " ";
    }
    cout << endl;
  }
  return 0;
}