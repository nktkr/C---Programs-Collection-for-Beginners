// 11. Program To Find Sum Of Series 1 ^ 2 + 3 ^ 2 + 5 ^ 2 + . . . . . . . . . . . n ^ 2
#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Enter the value of n :";
  cin >> n;
  for (int i = 1; i <= n; i = i + 2)
  {
    sum = sum + (i*i);
  }
  cout << "\nSum of the series : " << sum;
  return 0;
}

// Another approach to solve is to use the mathematical formula to find the sum of the series.
// #include<iostream>
// using namespace std;

// int pattern_sum(int n){
//     int sum;
//     sum = ( ((2 * n) – 1) * (((2 * n) – 1)+ 1) * ( ( 2 * ((2 * n) – 1) ) + 1 ) ) / 6;
//     return sum;
// }

// int main(){
//     int num;
//     cout<<"Enter the number of terms you want:-";
//     cin>>num;
//     cout<<pattern_sum(num);
//     return 0;
// }