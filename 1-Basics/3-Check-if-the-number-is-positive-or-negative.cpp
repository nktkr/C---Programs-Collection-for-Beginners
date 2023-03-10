// 3. Check if the number is Positive or Negative Program
#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "\nEnter the Number : ";
  cin >> num;
  if (num > 0) //comparing number with zero
  {
    cout << "\nNumber is positive" << endl;
  }
  else if (num < 0)
  {
    cout << "\n Number is Negative" << endl;
  }
  else
  {
    cout << "\nNumber is equal to Zero" << endl;
  }
  return 0;
}
