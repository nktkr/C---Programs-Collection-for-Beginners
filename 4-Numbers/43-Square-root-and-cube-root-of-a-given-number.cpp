// Square root and Cube root of a given Number

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  double n; 
  cout << "Enter the number to get Squre root and Cube root: ";
  cin >> n;

  cout << "Square Root: " << sqrt(n) << endl;
  cout << "Cube Root: " << cbrt(n) << endl;
}