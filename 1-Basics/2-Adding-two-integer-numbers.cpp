#include<iostream>

using namespace std;

int main()
{
  int num1, num2; // declaring number variables
  int sum = 0;    // declaring sum variable to store the addition

  cout << "\n##=== Program to add two interger numbers ===##\n\n";

  cout << "Enter the first number : ";  
  // asking user to enter the first number
  cin >> num1;
  // storing the number intered by user in variable num1

  cout << "\n Enter the second number : ";  
  // asking user to enter the second number
  cin  >> num2;
  //storing the number intered by user in variable num2
  sum = num1 + num2;  //adding the two numbers

  cout << "\n" << num1 << " 2+ " << num2 << " = " << sum << endl;
  //printing sum output

  return 0;

}

