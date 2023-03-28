// Determine Perfect Square Program

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  long long num;
  long long sqroot;  
  cout << "Enter the number to check for whether Perfect Square: ";
  cin >> num;

  sqroot = sqrt(num);

  if(sqroot*sqroot == num)
    cout << num << " is Perfect Square.";
  else
    cout << num << " is NOT Perfect Square.";

  return 0;
}