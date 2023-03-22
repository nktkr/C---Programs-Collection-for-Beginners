// Fibonacci Series

// i. Print Fibonacci Series up to n number of terms

// #include <iostream>
// using namespace std;

// void PrintFibonacciton(int n)
// {
//   int temp, pre = 0, next = 1;

//   if (n >= 1)
//     cout << pre << " ";
//   if (n >= 2)
//     cout << next << " ";
  
//   for(int i = 1; i <= n - 2; i++)
//   {
//     temp = next + pre;
//     cout << temp << " ";
//     pre = next;
//     next = temp;    
//   } 
// }

// int main()
// {
//   int n;
//   cout << "Enter the number of terms you want get: ";
//   cin >> n;

//   PrintFibonacciton(n);
//   return 0;
// }



// ii. Program to Generate Sequence up to a certain number

#include <iostream>
using namespace std;

void PrintFibonacciton(int n)
{
  int temp, pre = 0, next = 1;

  if (n >= 0)
    cout << pre << " ";
  if (n >= 1)
    cout << next << " ";
  
  while(true)
  {
    temp = next + pre;
    if(temp >= n)
      break;
    cout << temp << " ";
    pre = next;
    next = temp;    
  } 
  cout << endl;
}

int main()
{
  int n;
  cout << "Enter the certain number till which you want to generate fibonacci series: ";
  cin >> n;

  PrintFibonacciton(n);
  return 0;
}