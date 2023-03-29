// Determine if the Number is Prime or Composite

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  int num;

  cout << "Enter the number (greater than 1) to check whether Prime or Composite: ";
  cin >> num;

  for(int i = 2; i <= sqrt(num); i++)
  {
    if(num % i == 0)
    {
      cout << num << " is Composite" << endl;
      return 0;
    }
  }
  cout << num << " is Prime" << endl;
  return 0;
}