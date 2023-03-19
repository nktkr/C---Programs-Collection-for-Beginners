// 34. Program To Check Number Is Even Or Odd Using If/Else Statements

#include<iostream>
using namespace std;

int main()
{
  int num;
  
  cout << "Enter the number to chech for Even/odd: ";
  cin >> num;

  if(num % 2 == 0 ) 
    cout << num << " is even" << endl;
  else
    cout << num << " is odd" << endl;
  
  return 0;
}