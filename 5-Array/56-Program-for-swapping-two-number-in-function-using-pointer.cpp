// Program For Swapping Two Number In Function Using Pointer

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp; 
}

int main()
{
  int num1, num2;
  cout << "Enter num1:";
  cin >> num1;
  cout << "Enter num2:";
  cin >> num2;

  swap(&num1, &num2);
  
  cout << "now printing the numbers after swapping\n";
  cout << "num1:" << num1 << "\n";
  cout << "num2:" << num2 << "\n";
}